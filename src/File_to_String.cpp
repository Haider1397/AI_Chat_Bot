#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>

#include "../include/File_to_String.h"
#include "../include/String_To_Tokens_Functions.h"

using namespace std;

void File_Display(vector <string> File)
{
    for (int i = 0; i < File.size(); i++)
    {
        cout<<File[i]<<endl;
    }
}

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
    File_Display(lines);
    return lines;

}