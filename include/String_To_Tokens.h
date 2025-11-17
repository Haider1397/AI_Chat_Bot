#include <iostream>
#include <string> 

using namespace std;

#ifndef String_To_Tokens
#define String_To_Tokens

vector<string> String_To_Token(string str);
vector<string> Clean_Array_of_Strings(vector<string> str_array);

vector<string> Remove_IS_Form_Strings(vector<string> str_array);
vector<string> Remove_The_Form_Strings(vector<string> str_array);
vector<string> Remove_A_Form_Strings(vector<string> str_array);
vector<string> Remove_An_Form_Strings(vector<string> str_array);
vector<string> Remove_Of_Form_Strings(vector<string> str_array);
vector<string> Remove_In_Form_Strings(vector<string> str_array);
vector<string> Remove_To_Form_Strings(vector<string> str_array);
vector<string> Remove_And_Form_Strings(vector<string> str_array);   
vector<string> Remove_Are_Form_Strings(vector<string> str_array);

vector<string> Remove_Common_Words(vector<string> str_array);



#endif // String_To_Tokens
