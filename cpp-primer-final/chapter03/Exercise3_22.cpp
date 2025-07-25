﻿//Exercise 3.22: Revise the loop that printed the first paragraph in text to instead change the elements in text that
// correspond to the first paragraph to all uppercase. After you've updated text, print its contents.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::isalpha;

int main()
{
    vector<string> text;
    for (string line; getline(cin, line); text.push_back(line));

    for (auto& word : text)
    {
        for (auto& ch : word)
            if (isalpha(ch)) ch = toupper(ch);
        cout << word << " ";
    }
    
    return 0;
}
/*
Revise the loop that printed the first paragraph in text to instead change the elements in text that correspond to the first paragraph to all uppercase. After you've updated text, print its contents.

REVISE THE LOOP THAT PRINTED THE FIRST PARAGRAPH IN TEXT TO INSTEAD CHANGE THE ELEMENTS IN TEXT THAT CORRESPOND TO THE FIRST PARAGRAPH TO ALL UPPERCASE. AFTER YOU'VE UPDATED TEXT, PRINT ITS CONTENTS. 
Process finished with exit code 0.


*/





#endif