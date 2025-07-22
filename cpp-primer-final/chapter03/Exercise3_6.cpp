//Exercise 3.6: Use a range for to change all the characters in a string to x.

#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1("use a range for to change all the characters in a string to x");
    for (auto &c : s1) c = 'X';
    cout << s1 << endl;
    return 0;
}

#endif
/*
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Process finished with exit code 0.



*/