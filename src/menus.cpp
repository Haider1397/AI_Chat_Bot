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
    cout << endl;
    cout << "How can I assist you today?" << endl;
}
void Output_Display_Menu( vector <string> output)
{
    for (int i = 0; i < output.size(); i++){
        cout << output[i] << endl;
    }
    
}
void New_Chat_Menu()
{
    system("cls");
    Main_Menu();
}