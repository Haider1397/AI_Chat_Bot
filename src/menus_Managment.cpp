#include <iostream>
#include <string>
#include <vector>

#include "../include/meuns_Managment.h"
#include "../include/menus.h"
#include "../include/String_To_Tokens_Functions.h"
#include "../include/Responce_Managment.h"

using namespace std;

string Prompt_Input(){
    string prompt;
    cout << "User: ";
    getline(cin, prompt);
    return prompt;
}
void Menu_Managment(){
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