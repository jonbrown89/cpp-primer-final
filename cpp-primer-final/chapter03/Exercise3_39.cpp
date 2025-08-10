//Exercise 3.39: Write a program to compare two s__cpp_raw_strings. Now write a program to compare the values of two
// C-style character strings

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <string>
#include <cstring>
using std::cout;
using std::endl;
using std::string;


int main()
{
    // use string.
    string s1("Satoshi"), s2("Nakamoto");
    if (s1 == s2)
        cout << "same string." << endl;
    else if (s1 > s2)
        cout << s1 << " > " << s2 << endl;
    else
        cout << s2 << " < " << s1 << endl;

    cout << "======================" << endl;

    // use C-Style character strings.
    const char* cs1 = "Satoshi";
    const char* cs2 = "Nakamoto";
    auto result = strcmp(cs1, cs2);
    if (result == 0)
        cout << "same string." << endl;
    else if (result < 0)
        cout << cs1 << " < " << cs2 << endl;
    else
        cout << cs1 << " > " << cs2 << endl;
    
    return 0;
}

#endif
/*
Satoshi > Nakamoto
======================
Satoshi > Nakamoto

Process finished with exit code 0.


*/