#include <iostream>
#include <string> 

using namespace std;

#ifndef MENUS_H
#define MENUS_H

void Main_Menu();
string Input_Loop();
void Output_Loop(string response);
char Main_Options();
char Personal_Information_Options();
char Tell_Me_About_Yourself();
char Tell_Me_About_SomeOne(string Name);
char Ask_Me_About_Yourself(string Name, int Age, vector<string> Hobbies, vector<string> Education, string Location, vector<string> Language, vector<string> Likes, vector<string> Dislikes);
void Exit_Message();
void Saved_Message();

string Input_Your_Name();
string Input_Your_Age();
string Input_Your_Location();
string input_Your_Hobbies();
string input_Your_Education();
string input_Your_Language();
string input_Your_Likes();
string input_Your_Dislikes();


#endif // MENUS_H
