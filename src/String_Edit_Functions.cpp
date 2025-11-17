#include   <string>
#include   <fstream>
#include   <sstream>
#include   <vector>
#include "../include/String_Edit_Functions.h"

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