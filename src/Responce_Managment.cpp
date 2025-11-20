#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>

#include "../include/Responce_Managment.h"
#include "../include/String_To_Tokens_Functions.h"
#include "../include/File_to_String.h"

extern vector <string> File;
extern string json_file_path;

using namespace std;
vector <vector<int>> Possible_Topic_In_Json(vector<string> tokens ){
    vector <vector<int>> Possible_Topics;
    vector <string> line_tokens;
    int points = 0;
    int size = tokens.size();
    float Points_Calculation = 0.0;

    int File_Lines = File.size();

    string line;

    for (int line_number = 0; line_number < File_Lines; line_number++)
    {
        points = 0;
        line = File[line_number];
        line_tokens = Processed_String_To_Token(line);

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

vector <string> Extract_Topic_Details_From_Json(vector <vector<int>> Possible_Topics){

    int Randomizer = rand() % 5;
    vector <string> line;
    int Topic_Line_Number = Possible_Topics[0][0] + 1;
    for (Topic_Line_Number; Topic_Line_Number < File.size(); Topic_Line_Number++)
    {   if(File[Topic_Line_Number].find("Topic") != string::npos)
        {
            break;
        }
        if(File[Topic_Line_Number].find("{ \"version_1\"") != string::npos && Randomizer == 0)
        {
            for(Topic_Line_Number; Topic_Line_Number < File.size(); Topic_Line_Number++)
            {
                //cout<<File[Topic_Line_Number]<<endl;
                if (File[Topic_Line_Number].find("version_1") != string::npos)
                {
                    line.push_back(Clean_Json_Details(File[Topic_Line_Number]));
                }
                else
                    break;
        
            }
            break;
        }
        else if(File[Topic_Line_Number].find("version_2") != string::npos && Randomizer == 1)
        {
            for(Topic_Line_Number; Topic_Line_Number < File.size(); Topic_Line_Number++)
            {
                //cout<<File[Topic_Line_Number]<<endl;
                if (File[Topic_Line_Number].find("version_2") != string::npos)
                {
                    line.push_back(Clean_Json_Details(File[Topic_Line_Number]));
                }
                else
                    break;
        
            }
            break;
        }
        else if(File[Topic_Line_Number].find("version_3") != string::npos && Randomizer == 2)
        {
            for(Topic_Line_Number; Topic_Line_Number < File.size(); Topic_Line_Number++)
            {
                //cout<<File[Topic_Line_Number]<<endl;
                if (File[Topic_Line_Number].find("version_3") != string::npos)
                {
                    line.push_back(Clean_Json_Details(File[Topic_Line_Number]));
                }
                else
                    break;
            }
            break;
        }
        else if(File[Topic_Line_Number].find("version_4") != string::npos && Randomizer == 3)
        {
            for(Topic_Line_Number; Topic_Line_Number < File.size(); Topic_Line_Number++)
            {
                //cout<<File[Topic_Line_Number]<<endl;
                if (File[Topic_Line_Number].find("version_4") != string::npos)
                {
                    line.push_back(Clean_Json_Details(File[Topic_Line_Number]));
                }
                else
                    break;
            }
            break;
        }
        else if(File[Topic_Line_Number].find("version_5") != string::npos && Randomizer == 4)
        {
            for(Topic_Line_Number; Topic_Line_Number < File.size(); Topic_Line_Number++)
            {
                //cout<<File[Topic_Line_Number]<<endl;
                if (File[Topic_Line_Number].find("version_5") != string::npos)
                {
                    line.push_back(Clean_Json_Details(File[Topic_Line_Number]));
                }
                else
                    break;
            }
            break;
        }

    }
    return line;
}


vector <string> Responce_Managment_System(string prompt){
    vector <string> responce;
    vector <vector<int>> Possible_Topics;
    if (File.empty()){
        cout<<"File is Empty"<<endl;
    }
    vector<string> tokens = Processed_String_To_Token(prompt);
    //cout<<"Processed_String_To_Token"<<endl;

    Possible_Topics = Possible_Topic_In_Json(tokens);


    if (Possible_Topics.empty())
    {
        responce = {
            {"Sorry for inconvinence but I can't help you in this topic right now."},
            {""},
            {"Can I you with any other topic please?"}
        };
    }
    else
    {
        Possible_Topics = Arange_Possible_Topics_Decending(Possible_Topics);

        /*for (int i = 0; i < Possible_Topics.size(); i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout<<Possible_Topics[i][j]<<"\t";
            }
            cout<<endl;
            
        }*/
        responce = Extract_Topic_Details_From_Json(Possible_Topics);
    }
    return responce;
}



