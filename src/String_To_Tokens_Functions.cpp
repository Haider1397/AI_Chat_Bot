#include <iostream>
#include <vector>
#include <string>

#include "../include/String_To_Tokens_Functions.h"

using namespace std;

string Remove_qoutes(string str) {
    if (str.length() >= 2 && str.front() == '\"' && str.back() == '\"') {
        return str.substr(1, str.length() - 2);
    }
    return str;
}
string Remove_collon(string str) {
    if (!str.empty() && str.back() == ':') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string Remove_comma(string str) {
    if (!str.empty() && str.back() == ',') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string Remove_space(string str) {
    size_t start = str.find_first_not_of(" \t\n\r");
    size_t end = str.find_last_not_of(" \t\n\r");
    if (start != string::npos && end != string::npos) {
        return str.substr(start, end - start + 1);
    }
    return "";
}
string Seprate_Before_Colon(string str) {
    size_t colonPos = str.find(':');
    if (colonPos != string::npos) {
        return str.substr(0, colonPos);
    }
    return str;
}
string Seprate_After_Colon(string str) {
    size_t colonPos = str.find(':');
    if (colonPos != string::npos && colonPos + 1 < str.length()) {
        return str.substr(colonPos + 1);
    }
    return "";
}
int Count_Number_of_Words(string str) {
    int count = 0;
    bool inWord = false;

    for (char ch : str) {
        if (isspace(ch)) {
            if (inWord) {
                inWord = false;
            }
        } else {
            if (!inWord) {
                inWord = true;
                count++;
            }
        }
    }

    return count;
}
string Separate_Before_First_Space(string str) {
    size_t pos = str.find(' ');
    if (pos != string::npos) {
        return str.substr(0, pos);
    }
    return str; // If no space is found, return the whole string
}
string Separate_After_First_Space(string str) {
    size_t pos = str.find(' ');
    if (pos != string::npos) {
        return str.substr(pos + 1);
    }
    return ""; // If no space is found, return an empty string
}
string To_Lowercase(string str) {
    for (char& ch : str) {
        ch = tolower(ch);
    }
    return str;
}
string remove_period(string str) {
    if (!str.empty() && str.back() == '.') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string remove_exclamation(string str) {
    if (!str.empty() && str.back() == '!') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string remove_question_mark(string str) {
    if (!str.empty() && str.back() == '?') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string remove_hyphen(string str) {
    if (!str.empty() && str.back() == '-') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string remove_underscore(string str) {
    if (!str.empty() && str.back() == '_') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string remove_asterisk(string str) {
    if (!str.empty() && str.back() == '*') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string remove_parentheses(string str) {
    if (!str.empty() && str.front() == '(' && str.back() == ')') {
        return str.substr(1, str.length() - 2);
    }
    return str;
}
string remove_brackets(string str) {
    if (!str.empty() && str.front() == '[' && str.back() == ']') {
        return str.substr(1, str.length() - 2);
    }
    return str;
}
string remove_braces(string str) {
    if (!str.empty() && str.front() == '{' && str.back() == '}') {
        return str.substr(1, str.length() - 2);
    }
    return str;
}
string remove_slash(string str) {
    if (!str.empty() && str.back() == '/') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string remove_backslash(string str) {
    if (!str.empty() && str.back() == '\\') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string remove_pipe(string str) {
    if (!str.empty() && str.back() == '|') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string remove_plus(string str) {
    if (!str.empty() && str.back() == '+') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string remove_equal(string str) {
    if (!str.empty() && str.back() == '=') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string remove_at_symbol(string str) {
    if (!str.empty() && str.back() == '@') {
        return str.substr(0, str.length() - 1);
    }
    return str;
}
string clean_string(string str) {
    str = Remove_comma(str);
    str = Remove_collon(str);
    str = Remove_qoutes(str);
    str = Remove_space(str);
    str = remove_period(str);
    str = remove_exclamation(str);
    str = remove_question_mark(str);
    str = remove_hyphen(str);
    str = remove_underscore(str);
    str = remove_asterisk(str);
    str = remove_parentheses(str);
    str = remove_brackets(str);
    str = remove_braces(str);
    str = remove_slash(str);
    str = remove_backslash(str);
    str = remove_pipe(str);
    str = remove_plus(str);
    str = remove_equal(str);
    str = remove_at_symbol(str);
    return str;
}
vector<string> Clean_Array_of_Strings(vector<string> str_array){
    int total_strings = str_array.size();
    for (int i = 0; i < total_strings; i++)
    {
        str_array[i] = clean_string(str_array[i]);
    }
    return str_array;
}
vector<string> Remove_IS_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "is" && str != "Is" && str != "IS") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;
}
vector<string> Remove_The_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "the" && str != "The" && str != "THE") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;
}
vector<string> Remove_A_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "a" && str != "A") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;
}
vector<string> Remove_An_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "an" && str != "An" && str != "AN") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;
}
vector<string> Remove_Of_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "of" && str != "Of" && str != "OF") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;
}
vector<string> Remove_In_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "in" && str != "In" && str != "IN") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;
}
vector<string> Remove_To_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "to" && str != "To" && str != "TO") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;
}
vector<string> Remove_And_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "and" && str != "And" && str != "AND") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;
}
vector<string> Remove_Are_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "are" && str != "Are" && str != "ARE") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;
}
vector<string> Remove_You_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "you" && str != "You" && str != "YOU") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;

}
vector<string> Remove_Can_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "can" && str != "Can" && str != "CAN") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;

}
vector<string> Remove_Help_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "help" && str != "Help" && str != "HELP") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;

}
vector<string> Remove_I_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "I" && str != "i") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;

}
vector<string> Remove_My_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "my" && str != "My" && str != "MY") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;

}
vector<string> Remove_Me_Form_Strings(vector<string> str_array){
    vector<string> cleaned_array;
    for (const string& str : str_array) {
        if (str != "me" && str != "Me" && str != "ME") {
            cleaned_array.push_back(str);
        }
    }
    return cleaned_array;

}
vector<string> Remove_Common_Words(vector<string> str_array){
    str_array = Remove_IS_Form_Strings(str_array);
    str_array = Remove_The_Form_Strings(str_array);
    str_array = Remove_A_Form_Strings(str_array);
    str_array = Remove_An_Form_Strings(str_array);
    str_array = Remove_Of_Form_Strings(str_array);
    str_array = Remove_In_Form_Strings(str_array);
    str_array = Remove_To_Form_Strings(str_array);
    str_array = Remove_And_Form_Strings(str_array);
    str_array = Remove_Are_Form_Strings(str_array);
    str_array = Remove_You_Form_Strings(str_array);
    str_array = Remove_Can_Form_Strings(str_array);
    str_array = Remove_Help_Form_Strings(str_array);
    return str_array;
}
vector<string> String_To_Token(string str){
    int total_words = Count_Number_of_Words(str);
    vector<string> tokens(total_words);
    for (int i = 0; i < total_words; i++)
    {
        tokens[i] = Separate_Before_First_Space(str);
        str = Separate_After_First_Space(str);
    }
    return tokens;
}
vector<string> Processed_String_To_Token(string str){
    str = To_Lowercase(str);
    vector<string> tokens = String_To_Token(str);
    tokens = Clean_Array_of_Strings(tokens);
    tokens = Remove_Common_Words(tokens);
    return tokens;
}
string Clean_Json_Details(string str){
    str = Seprate_After_Colon(str);
    str = str.substr(2, str.length()-6);
    return str;
}