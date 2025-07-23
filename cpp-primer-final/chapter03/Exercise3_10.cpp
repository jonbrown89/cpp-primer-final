//Exercise 3.10: Write a program that reads a string of characters including punctuation and writes what was read but with
// the punctuation removed.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    //ispunct(c)

    cout << "Enter a string of characters including punctuation." << endl;
    for (string s; getline(cin, s); cout << endl)
        for (auto i : s)
            if (!ispunct(i)) cout << i;
    return 0;
}


#endif
/*
Enter a string of characters including punctuation.
p,u.n?c!t'u'a"t,i!o?n??!
punctuation

Process finished with exit code 0.

*/