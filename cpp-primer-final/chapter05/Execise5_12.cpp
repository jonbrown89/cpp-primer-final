//Exercise 5.12: Modify our vowel-counting program so that it counts the number of occurrences of the following
// two-character sequences: ff, fl, and fi.

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
    unsigned int spaceCnt = 0, tabCnt = 0, newlineCnt = 0, otherCnt = 0;
    unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, prech = '\0';
    while (cin.get(ch)) // use .get to count whitespace or you can use std::noskipws
    {
        switch (ch)
        {
        case 'A': case 'a': aCnt++; break;
        case 'E': case 'e': eCnt++; break;
        case 'I': iCnt++; break;
        case 'i': iCnt++;
            if (prech == 'f')
                ++fiCnt;
            break;
        case 'O': case 'o': oCnt++; break;
        case 'U': case 'u': uCnt++; break;
        case ' ': spaceCnt++; break;
        case '\t': tabCnt++; break;
        case '\n': newlineCnt++; break;
        case 'f':
            if (prech == 'f')
                ++ffCnt;
            break;
        case 'l':
            if (prech == 'f')
                ++flCnt;
            break;
        default: ++otherCnt;
        }
        prech = ch;
    }
    cout << "Number of vowel a: " << aCnt << '\n'
         << "Number of vowel e: " << eCnt << '\n'
         << "Number of vowel i: " << iCnt << '\n'
         << "Number of vowel o: " << oCnt << '\n'
         << "Number of vowel u: " << uCnt << '\n'
         << "Number of space: " << spaceCnt << '\n'
         << "Number of tabs: " << tabCnt << '\n'
         << "Number of newline: " << newlineCnt << '\n'
         << "Number of other: " << otherCnt << '\n'
         << "Number of sequences ff: " << ffCnt << '\n'
         << "Number of sequences fl: " << flCnt << '\n'
         << "Number of sequences fi: " << fiCnt << endl;
    
    return 0;
}

#endif
