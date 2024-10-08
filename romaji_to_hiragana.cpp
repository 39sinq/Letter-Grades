/*
Author: Kathy / 39sinq

WIP

*/

#include <iostream>
#include <sstream> // Breaks string into tokens/words
#include <map> // Making a dictionaryyeah
#include <string>
using namespace std;

int main()
{
    // Mapping
    map<string, string> romajiToHiragana = {

    {"a","あ"},
    {"i","い"},
    {"u","う"},
    {"e","え"},
    {"o","お"},
    {"ha","は"},
    {"hi","ひ"},
    {"hu","ふ"},
    {"he","へ"},
    {"ho","ほ"},

    // Consider : hash table, vector, external file*

    }



    // Input
    string input;
    cout << "Enter a sentence in romaji: ";
    getline(cin, input);

    // String stream
    stringstream ss(input);
    string word;

    // Extracting
    while(ss >> word)
        {

        }

}