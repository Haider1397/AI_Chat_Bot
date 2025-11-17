#include <string>

using namespace std;

#ifndef File_Handling_Functions_H
#define File_Handling_Functions_H

string Remove_qoutes(string str);
string Remove_collon(string str);
string Remove_comma(string str);
string Remove_space(string str);
string Seprate_Before_Colon(string str);
string Seprate_After_Colon(string str);
string remove_period(string str);
string remove_slash(string str);
string remove_backslash(string str);
string remove_pipe(string str);
string remove_plus(string str);
string remove_equal(string str);
string remove_at_symbol(string str);
string clean_string(string str);

int Count_Number_of_Words(string str);
string Separate_Before_First_Space(string str);
string Separate_After_First_Space(string str);


#endif // File_Handling_Functions_H
