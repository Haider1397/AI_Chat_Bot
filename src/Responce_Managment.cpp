#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>

#include "../include/Responce_Managment.h"
#include "../include/String_To_Tokens_Functions.h"

using namespace std;
vector <string> File_To_String(string json_file_path){
    vector <string> lines;
    string line;
    ifstream file(json_file_path);
    if (!file.is_open()) {
        cerr << "Error opening file: " << json_file_path << endl;
        return {};
    }
    while (getline(file, line)) {
        lines.push_back(line);
    }
    file.close();
    return lines;

}

int Number_lines_in_File(string json_file_path){
    ifstream file(json_file_path);
    string line;
    int line_count = 0;

    if (!file.is_open()) {
        cerr << "Error opening file: " << json_file_path << endl;
        return 0;
    }

    while (getline(file, line)) {
        line_count++;
    }

    file.close();
    return line_count;
}

vector <vector<int>> Possible_Topic_In_Json(vector<string> tokens, string json_file_path){
    vector <vector<int>> Possible_Topics;
    vector <string> line_tokens;
    int points = 0;
    int size = tokens.size();
    float Points_Calculation = 0.0;

    ifstream file(json_file_path);

    if (!file.is_open()) {
        cerr << "Error opening file: " << json_file_path << endl;
        return {};
    }

    int File_Lines = Number_lines_in_File(json_file_path);


    string line;

    for (int line_number = 0; line_number < File_Lines; line_number++)
    {
        points = 0;
        getline(file, line); // read 1 line only ONCE

        for (int token_index = 0; token_index < size; token_index++)
        {

            if ((line.find(tokens[token_index]) != string::npos) && line.find("Topic") != string::npos) {
                points++;         
            }
        }
        //cout<<points<<"\t"<< size <<endl;
        Points_Calculation = ((float)points / size)*100;
        if(points != 0)
            Possible_Topics.push_back({line_number, static_cast<int>(Points_Calculation)});
    }
    return Possible_Topics;
}

vector <vector<int>> Arange_Possible_Topics_Decending(vector <vector<int>> Possible_Topics){
    int size = Possible_Topics.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (Possible_Topics[i][1] > Possible_Topics[j][1])
            {
                swap(Possible_Topics[i][0], Possible_Topics[j][0]);
                swap(Possible_Topics[i][1], Possible_Topics[j][1]);
            }
        }
    }
    return Possible_Topics;

}

vector <string> Extract_Topic_Details_From_Json(vector <vector<int>> Possible_Topics, vector<string> File){

    int Rambomizer = rand() % 5;

    vector <string> line;
    int Topic_Line_Number = Possible_Topics[0][0];
    for(Topic_Line_Number; Topic_Line_Number < File.size(); Topic_Line_Number++)
    {
        if (File[Topic_Line_Number].find("version_1") != string::npos)
        {
            line.push_back(Clean_Json_Details(File[Topic_Line_Number]));
        }
        else if (File[Topic_Line_Number].find("version_2") != string::npos)
        {
            break;
        }     
    }
    return line;
}

vector <string> detail_Extration_From_Json(vector <vector<int>> Possible_Topics, string json_file_path)
{
    vector <string> line;
    vector <string> File = File_To_String(json_file_path);

    line = Extract_Topic_Details_From_Json(Possible_Topics, File);

    return line;
}
vector <string> Responce_Managment_System(string prompt){
    vector <string> responce;

    string json_file_path = "data/Content.json";
    vector<string> tokens = Processed_String_To_Token(prompt);

    vector <vector<int>> Possible_Topics;
    
    Possible_Topics = Possible_Topic_In_Json(tokens, json_file_path);
    Possible_Topics = Arange_Possible_Topics_Decending(Possible_Topics);
    
    responce = detail_Extration_From_Json(Possible_Topics, json_file_path);
    return responce;
}



