#include <iostream>
#include <string>
#include <vector>

#include "../include/menus.h"
using namespace std;

void Main_Menu() 
{
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "                                  HI! Welcome to AI Chat Bot                                  " << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "How can I help you today" << endl;
}
char Main_Options()
{  
    cout<< "Please select an option from the menu below:" << endl;
    cout<< "A. Personal Information" << endl;
    cout<< "B. General Knowledge Questions" << endl;
    cout<< "C. Fun and Entertainment" << endl;
    cout<< "D. Maths" << endl;
    cout<< "E. Exit" << endl;
    char choice;
    cin >> choice;
    return choice;
}
char Personal_Information_Options(){

    system("cls");
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "                           Personal Information Menu                                        " << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout<< "Please select an option from the menu below:" << endl;
    cout<< "A. Ask about your self" << endl;
    cout<< "B. Tell me about yourself" << endl;
    cout<< "C. Tell about your friends and family etc" << endl;
    cout<< "D. Tell me a joke" << endl;
    cout<< "E. Go Back to Main Menu" << endl;
    char choice;
    cin >> choice;
    return choice;
}
char Ask_Me_About_Yourself(string Name, int Age, vector<string> Hobbies, vector<string> Education, string Location, vector<string> Language, vector<string> Likes, vector<string> Dislikes){
    
    system("cls");
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "                           About Yourself Information                                        " << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout<<"Your Name is: "<<Name<<endl;
    cout<<"Your Age is: "<<Age<<endl;
    cout<<"Your Hobbies are: "<<endl;
    for (const string& hobby : Hobbies) {
        cout << hobby << endl;
    }
    cout<<"Your Education details are: "<<endl;
    for (const string& edu : Education) {
        cout << edu << endl;
    }
    cout<<"Your Language is: "<<endl;
    for (const string& lang : Language) {
        cout << lang << endl;
    }
    cout<<"Your Likes are: "<<endl;
    for (const string& like : Likes) {
        cout << like << endl;
    }
    cout<<"Your Dislikes are: "<<endl;
    for (const string& dislike : Dislikes){
        cout << dislike << endl;
    }
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"A. Go Back"<<endl;
    cout<<"B. Exit"<<endl;
    char choice;
    cin >> choice;
    return choice; 
}
char Tell_Me_About_Yourself()
{
    system("cls");
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "                           Tell Me About Yourself Menu                                      " << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout<<"A. Tell me about your Name"<<endl;
    cout<<"B. Tell me about your Age"<<endl;
    cout<<"C. Tell me about your Hobbies"<<endl;
    cout<<"D. Tell me about your Education"<<endl;
    cout<<"E. Tell me about your Location"<<endl;
    cout<<"F. Tell me about your Language"<<endl;
    cout<<"G. Tell me about your Likes"<<endl;
    cout<<"H. Tell me about your Dislikes"<<endl;
    cout<<"I. Go Back"<<endl;
    char choice;
    cin >> choice;
    return choice;
}
char Tell_Me_About_SomeOne(string Name)
{
    system("cls");
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "                           Tell Me About " << Name << " Menu                                      " << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout<<"A. Tell me about "<<Name<<" Name"<<endl;
    cout<<"B. Tell me about "<<Name<<" Age"<<endl;
    cout<<"C. Tell me about "<<Name<<" Hobbies"<<endl;
    cout<<"D. Tell me about "<<Name<<" Education"<<endl;
    cout<<"E. Tell me about "<<Name<<" Location"<<endl;
    cout<<"F. Tell me about "<<Name<<" Language"<<endl;
    cout<<"G. Tell me about "<<Name<<" Likes"<<endl;
    cout<<"H. Tell me about "<<Name<<" Dislikes"<<endl;
    cout<<"I. Go Back"<<endl;
    char choice;
    cin >> choice;
    return choice;
}
void Saved_Message()
{
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "                           Your information has been saved successfully!                    " << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;
}
void Exit_Message()
{
    system("cls");
    cout << "---------------------------------------------------------------------------------------------" << endl;
    cout << "                           Thank you for using AI Chat Bot! Goodbye!                         " << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;
}
string Input_Your_Name()
{
    cout << "Please enter your name: ";
    string name;
    cin >> name;
    return name;
}
string Input_Your_Age()
{
    cout << "Please enter your age: ";
    string age;
    cin >> age;
    return age;
}
string Input_Your_Location()
{
    cout << "Please enter your location: ";
    string location;
    cin >> location;
    return location;
}
string input_Your_Hobbies()
{
    cout << "Please enter your hobbies (comma separated): ";
    string hobbies;
    cin >> hobbies;
    return hobbies;
}
string input_Your_Education()
{
    cout << "Please enter your education details (comma separated): ";
    string education;
    cin >> education;
    return education;
}
string input_Your_Language()
{
    cout << "Please enter the languages you know (comma separated): ";
    string language;
    cin >> language;
    return language;
}
string input_Your_Likes()
{
    cout << "Please enter your likes (comma separated): ";
    string likes;
    cin >> likes;
    return likes;
}
string input_Your_Dislikes()
{
    cout << "Please enter your dislikes (comma separated): ";
    string dislikes;
    cin >> dislikes;
    return dislikes;
}
