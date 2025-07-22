//Exercise 3.7: What would happen if you define the loop control variable in the previous exercise as type char? Predict
// the results and then change your program to use a char to see if you were right.
/*
auto &c creates a reference to each character in the string so modifications affect the original.

char c creates a copy of each character, so modifications only affect the local copy.
 */

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
 string s1("use a range for to change all the characters in a string to x");
 for (char c : s1) c = 'X';  // Changed from auto &c to char c
 cout << s1 << endl;
 return 0;
}
#endif
/*
use a range for to change all the characters in a string to x

Process finished with exit code 0.



*/