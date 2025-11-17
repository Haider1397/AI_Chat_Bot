#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "../include/Decision_Tree_Function.h"

void My_DecisionTree(vector<string> query_tokens ){
    for (const string& token : query_tokens) {
        if (My_Query(token)) {
            
        }
        else{
            break;
        }
    }
}