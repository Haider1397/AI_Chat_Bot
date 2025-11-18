#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "../include/Responce_Managment.h"
#include "../include/String_To_Tokens_Functions.h"

using namespace std;

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
    int points = 0;
    int size = tokens.size();
    float Points_Calculation = 0.0;

    ifstream file(json_file_path);

    if (!file.is_open()) {
        cerr << "Error opening file: " << json_file_path << endl;
        return {};
    }

    int File_Lines = Number_lines_in_File(json_file_path);

    cout << "Total lines in JSON file: " << File_Lines << endl;

    string line;

    for (int line_number = 0; line_number < File_Lines; line_number++)
    {
        getline(file, line); // read 1 line only ONCE

        cout << "Processing line " << line_number + 1 << ": " << line << endl;

        for (int token_index = 0; token_index < size; token_index++)
        {
            cout << "Processing token " << token_index + 1 << ": " << tokens[token_index] << endl;
            cout << endl;
            cout << endl;
            if (line.find(tokens[token_index]) != string::npos) {
                points++;  
            }
        }
        Points_Calculation = points / size*100;
        Possible_Topics.push_back({line_number, static_cast<int>(Points_Calculation)});
        points = 0;
    }
    return Possible_Topics;
}

void Prompt_Managment_System(string prompt){
    string json_file_path = "data/Content.json";
    vector<string> tokens = Processed_String_To_Token(prompt);
    cout << "Total tokens after processing: " << tokens.size() << endl;
    vector <vector<int>> Possible_Topics;
    Possible_Topics = Possible_Topic_In_Json(tokens, json_file_path);
    
    cout << "Possible Topics and their Points:" << endl;

    for (int i = 0; i < Possible_Topics.size(); i++)
    {
        for (int j  = 2; j < 2; j++)
        {
            cout << Possible_Topics[i][j] << endl;
        }
        
    }
    
}



