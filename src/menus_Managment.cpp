#include <iostream>
#include <string>
#include <vector>

#include "../include/meuns_Managment.h"
#include "../include/menus.h"
using namespace std;

void Menu_Managment()
{
    char choice = Main_Options();
    if (choice == 'A' || choice == 'a')
    {
        char personal_info_choice = Personal_Information_Options();
        string key;
        string value;
        if (personal_info_choice == 'A' || personal_info_choice == 'a')
        {
            cout << "You selected: Ask about yourself" << endl;

            // Example user data
            string Name = "John Doe";
            int Age = 25;
            vector<string> Hobbies = {"reading", "gaming", "hiking"};
            vector<string> Education = {"Bachelor's in Computer Science", "Master's in Data Science"};
            string Location = "New York, USA";
            vector<string> Language = {"English", "Spanish"};
            vector<string> Likes = {"music", "movies", "sports"};
            vector<string> Dislikes = {"rain", "traffic"};
            char choice = Ask_Me_About_Yourself(Name, Age, Hobbies, Education, Location, Language, Likes, Dislikes);
            if (choice == 'A' || choice == 'a')
            {
                Menu_Managment();
            }
            else
            {
                Exit_Message();
            }

            
        }
        else if (personal_info_choice == 'B' || personal_info_choice == 'b')
        {
            while (true)
            {
            
                choice = Tell_Me_About_Yourself();
                if (choice == 'A' || choice == 'a')
                {
                    key = "Name";
                    value = Input_Your_Name();
                    Saved_Message();
                    continue;
                }
                else if (choice == 'B' || choice == 'b')
                {
                    key = "Age";
                    value = Input_Your_Age();
                    Saved_Message();
                    continue;
                }
                else if (choice == 'C' || choice == 'c')
                {
                    key = "Hobbies";
                    value = input_Your_Hobbies();
                    Saved_Message();
                    continue;
                }
                else if (choice == 'D' || choice == 'd')
                {
                    key = "Education";
                    value = input_Your_Education();
                    Saved_Message();
                    continue;
                }
                else if (choice == 'E' || choice == 'e')
                {
                    key = "Location";
                    value = Input_Your_Location();
                    Saved_Message();
                    continue;
                }
                else if (choice == 'F' || choice == 'f')
                {
                    key = "Language";
                    value = input_Your_Language();
                    Saved_Message();
                    continue;
                }
                else if (choice == 'G' || choice == 'g')
                {
                    key = "Likes";
                    value = input_Your_Likes();
                    Saved_Message();
                    continue;
                }
                else if (choice == 'H' || choice == 'h')
                {
                    key = "Dislikes";
                    value = input_Your_Dislikes();
                    Saved_Message();
                    continue;
                }
                else if (choice == 'I' || choice == 'i')
                {
                    Menu_Managment();
                    break;
                }
                else
                {
                    Exit_Message();
                    break;
                }
            }
        }

        else if (personal_info_choice == 'C' || personal_info_choice == 'c')
        {
            cout << "You selected: Tell about your friends and family etc" << endl;
        }

        else if (personal_info_choice == 'D' || personal_info_choice == 'd')
        {
            cout << "You selected: Tell me a joke" << endl;
        }

        else if (personal_info_choice == 'E' || personal_info_choice == 'e')
        {
            cout << "You selected: Go Back to Main Menu" << endl;
            Main_Menu();
        }

        else
        {
            cout << "Invalid choice. Please select a valid option." << endl;
        }

    }
    
    
}