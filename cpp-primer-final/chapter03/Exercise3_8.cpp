//Exercise 3.8: Rewrite the program in the first exercise, first using a while and again using a traditional for loop.
//Which of the three approaches do you prefer and why?

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main()
{
    string s1("use a range for to change all the characters in a string");

    //while
    decltype(s1.size()) i = 0;
    while (i < s1.size()) s1[i++] = 'X';
    cout << s1 << endl;

    //for
    for (i = 0; i < s1.size(); s1[i++] = 'Y');
    cout << s1 << endl;

    return 0;
}

#endif
/*
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY

Process finished with exit code 0.

*/
// for this example I prefer for range. If it was reading a file or stream I would prefer while loop.