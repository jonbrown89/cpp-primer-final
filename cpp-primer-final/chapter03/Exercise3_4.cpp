//Exercise 3.4: Write a program to read two strings and report whether the strings are equal. If not, report which of
// the two is larger. Now, change the program to report whether the strings have the same length, and if not, report
// which is longer.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    string s1, s2;
    cout << "Please enter two strings: " << endl;
    while (cin >> s1 >> s2)
    {
        if (s1 == s2)
        {
            cout << s1 << " is the same as " << s2 << endl;
            cout << s1 << " is the same length as " << s2 << endl;
        } else
        {
            cout << s1 << " is not the same as " << s2 << endl;
            if (s1.size() == s2.size())
            {
                cout << s1 << " is the same length as " << s2 << endl;
            } else
            {
                cout << "The longer string is " << ((s1.size() > s2.size()) ? s1 : s2) << endl;
            }
        }
    }
    return 0;
}

#endif
/*
Please enter two strings:
stringy string
stringy is not the same as string
The longer string is stringy

Process finished with exit code 0.

*/