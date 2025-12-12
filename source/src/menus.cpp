#include <iostream>
#include <string>
#include <vector>

#include "../include/menus.h"
using namespace std;

void Main_Menu()
{
    cout << "=================================================================="<<endl;
    cout << "====================== Hi, I am Ai Chat Bot ======================"<<endl; 
    cout << "=================================================================="<<endl;
    cout << "---------------------------- Ai Chat Bot -------------------------"<<endl;
    cout <<endl;
    cout << " How can I help you today?";
    cout<<endl;
    cout << endl;
}
void Output_Display_Menu( vector <string> output)
{
    cout << "---------------------------- Ai Chat Bot ------------------------- "<<endl;
    cout<<endl;
    for (int i = 0; i < output.size(); i++){
        cout << output[i] << endl;
    }
    cout<<endl;
    
}
string Prompt_Input(){
    string prompt;
    cout << "------------------------------ User ------------------------------ "<< endl;
    cout << endl;
    cout << "User: ";
    getline(cin, prompt);
    return prompt;
}
void New_Chat_Menu()
{
    system("cls");
    Main_Menu();
}