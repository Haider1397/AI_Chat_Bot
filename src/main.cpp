#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

#include "../include/menus.h"
#include "../include/String_To_Tokens.h"
#include "../include/String_Edit_Functions.h"
#include "../include/Tokens_To_Values.h"
#include "../include/meuns_Managment.h"



using namespace std;
int main()
{
/*     string abc = "Find my friend's job and education details in the city where I live";
    vector<string> tokens;
    Main_Menu();
    tokens = String_To_Token(abc);

    tokens = Remove_Common_Words(tokens);


    for (const string& token : tokens) {
        cout << clean_string(token) << endl;
    }
    cout << endl;

    unordered_map<string, string> keyValuePairs = Tokens_To_Values(tokens, abc);
    cout << "Extracted Key-Value Pairs:" << endl;
    for (const auto& pair : keyValuePairs) {
        cout << clean_string(pair.first) << ": " << clean_string(pair.second) << endl;
    }
    cout << endl;
    getchar();
    return 0; */

    char a;
    Menu_Managment();
    getchar();
    return 0;
}
