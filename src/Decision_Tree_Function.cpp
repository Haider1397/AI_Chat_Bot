#include   <string>
#include   <fstream>
#include   <sstream>
#include   <vector>


#include "../include/Decision_Tree_Function.h"

using namespace std;

bool My_Query(string query)
{
    vector<string> my_indicators = {"my", "My", "MY"};
    for (const string& indicator : my_indicators) {
        if (query.find(indicator) != string::npos) {
            return true;
        }
    }
    return false;
}

bool Name_Query(string query)
{
    vector<string> name_indicators = {"name", "MyName", "Name"};
    for (const string& indicator : name_indicators) {
        if (query.find(indicator) != string::npos) {
            return true;
        }
    }
    return false;
}
bool Greeting_Query(string query)
{
    vector<string> greeting_indicators = {"hello", "hi", "greetings", "hey"};
    for (const string& indicator : greeting_indicators) {
        if (query.find(indicator) != string::npos) {
            return true;
        }
    }
    return false;
}
bool Retation_Query(string query)
{
    vector<string> relation_indicators = {"friend", "family", "colleague", "relationship", "partner", "spouse", "sibling"};
    for (const string& indicator : relation_indicators) {
        if (query.find(indicator) != string::npos) {
            return true;
        }
    }
    return false;
}
bool Age_Query(string query)
{
    vector<string> age_indicators = {"age", "old", "years"};
    for (const string& indicator : age_indicators) {
        if (query.find(indicator) != string::npos) {
            return true;
        }
    }
    return false;
}
bool Hobby_Query(string query)
{
    vector<string> hobby_indicators = {"hobby", "interest", "pastime", "activity"};
    for (const string& indicator : hobby_indicators) {
        if (query.find(indicator) != string::npos) {
            return true;
        }
    }
    return false;
}
bool Job_Query(string query)
{
    vector<string> job_indicators = {"job", "work", "career", "profession", "occupation"};
    for (const string& indicator : job_indicators) {
        if (query.find(indicator) != string::npos) {
            return true;
        }
    }
    return false;
}
bool Education_Query(string query)
{
    vector<string> education_indicators = {"school", "college", "university", "degree", "education", "study"};
    for (const string& indicator : education_indicators) {
        if (query.find(indicator) != string::npos) {
            return true;
        }
    }
    return false;
}
bool Location_Query(string query)
{
    vector<string> location_indicators = {"city", "country", "location", "place", "live", "reside"};
    for (const string& indicator : location_indicators) {
        if (query.find(indicator) != string::npos) {
            return true;
        }
    }
    return false;
}
bool Language_Query(string query)
{
    vector<string> language_indicators = {"language", "speak", "spoken", "tongue", "dialect"};
    for (const string& indicator : language_indicators) {
        if (query.find(indicator) != string::npos) {
            return true;
        }
    }
    return false;
}
bool Like_Query(string query)
{
    vector<string> like_indicators = {"like", "love", "enjoy", "prefer", "fond"};
    for (const string& indicator : like_indicators) {
        if (query.find(indicator) != string::npos) {
            return true;
        }
    }
    return false;
}
bool Dislike_Query(string query)
{
    vector<string> dislike_indicators = {"dislike", "hate", "avoid", "reject", "avoid", "disagree"};
    for (const string& indicator : dislike_indicators) {
        if (query.find(indicator) != string::npos) {
            return true;
        }
    }
    return false;
}
bool Task_Query(string query)
{
    vector<string> task_indicators = {"task", "todo", "reminder", "note", "schedule", "help"};
    for (const string& indicator : task_indicators) {
        if (query.find(indicator) != string::npos) {
            return true;
        }
    }
    return false;
}