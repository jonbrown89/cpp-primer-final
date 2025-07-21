//Exercise 3.2: Write a program to read the standard input a line at a time. Modify your program to read a word at a time.
/*
#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main()
{
    for (string s1; getline(cin, s1);
        cout << s1 << endl);
    return 0;
}



#endif
*/
/*
reading the standard input a line at a time.
reading the standard input a line at a time.
this is the second line input.
this is the second line input.
this is the third.
this is the third.

Process finished with exit code 0.

*/
//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    for (string s1; cin >> s1; cout << s1 << endl);
    return 0;
}
#endif
/*
reading the standard input a word at a time.
reading
the
standard
input
a
word
at
a
time.

Process finished with exit code 0.


*/