/* #include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "../include/File_Handling_Functions.h"
#include "../include/Json_And_C.h"

using namespace std;

string Find_Value_From_File(string filePath, string key) {
    //cout<<"Searching for key: " << key << " in file: " << filePath << endl; // Debugging line
    ifstream inputFile(filePath);
    if (!inputFile.is_open()) {
        //cout<<"Failed to open file: " << filePath << endl; // Debugging line
        return "";
    }

    string line;
    while (getline(inputFile, line)) {
        //cout<<"Reading line: " << line << endl; // Debugging line
        size_t keyPos = line.find('\"' + key + '\"');
        if (keyPos != string::npos) {
            //cout<<"Found key line: " << line << endl; // Debugging line
            size_t colonPos = line.find(':', keyPos);
            if (colonPos != string::npos) {
                string valuePart = line.substr(colonPos + 1);
                valuePart = Remove_space(valuePart);
                valuePart = Remove_comma(valuePart);
                valuePart = Removeqoutes(valuePart);
                //cout<<"Extracted value: " << valuePart << endl; // Debugging line
                inputFile.close();
                return valuePart;
            }
        }
    }

    inputFile.close();
    return "";
}
string Check_If_key_exists_In_File(string filePath, string key,) */