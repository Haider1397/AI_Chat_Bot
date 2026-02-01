#include <iostream>
#include <string>
#include <vector>

#include "../include/meuns_Managment.h"
#include "../include/menus.h"
#include "../include/String_To_Tokens_Functions.h"
#include "../include/Responce_Managment.h"
#include "../include/File_to_String.h"

using namespace std;

vector <string> File;
string json_file_path = "data/Content.json";

void Menu_Managment(){
    File = File_To_String(json_file_path);
    bool New_Chat_Condition = true;
    vector <string> responce;
    while(true)
    {
        if (New_Chat_Condition)
        {
            New_Chat_Menu();
            New_Chat_Condition = false;
        }
        else
        {   
            string prompt = Prompt_Input();
            responce = Responce_Managment_System(prompt);
            Output_Display_Menu(responce);
        }

    }

}