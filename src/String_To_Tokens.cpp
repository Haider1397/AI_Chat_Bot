#include <iostream>
#include <vector>
#include <string>

#include "../include/String_To_Tokens.h"
#include "../include/String_Edit_Functions.h"

using namespace std;

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
    return str_array;
}