//Exercise 5.10: There is one problem our vowel-counting program as we've implemented it: It doesn't count capital
// letters as vowels. Write a program that counts both lower and uppercase letters as the appropriate vowel-- that is,
// your program should count both 'a' and 'A' as part of aCnt, and so forth.


//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while (cin >> ch)
    {
        switch (ch)
        {
            case 'A': case 'a': aCnt++; break;
            case 'E': case 'e': eCnt++; break;
            case 'I': case 'i': iCnt++; break;
            case 'O': case 'o': oCnt++; break;
            case 'U': case 'u': uCnt++; break;
            default: break;     // empty default: best practice to add default case even if empty to indicate it was considered
        }
    }
    cout << "Number of vowel a: " << aCnt << '\n'
         << "Number of vowel e: " << eCnt << '\n'
         << "Number of vowel i: " << iCnt << '\n'
         << "Number of vowel o: " << oCnt << '\n'
         << "Number of vowel u: " << uCnt << endl;
    
    return 0;
}

#endif