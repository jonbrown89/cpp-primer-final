//Exercise 5.9: Write a program using a series of if statements to count the number of vowels in text read from cin.

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
        if (ch == 'a')
            ++aCnt;
        else if (ch == 'e')
            ++eCnt;
        else if (ch == 'i')
            ++iCnt;
        else if (ch == 'o')
            ++oCnt;
        else if (ch == 'u')
            ++uCnt;
    }
    cout << "Number of vowel a: " << aCnt << '\n'
         << "Number of vowel e: " << eCnt << '\n'
         << "Number of vowel i: " << iCnt << '\n'
         << "Number of vowel o: " << oCnt << '\n'
         << "Number of vowel u: " << uCnt << '\n' << endl;
    
    return 0;
}

#endif
/*
asdfafa

Number of vowel a: 3
Number of vowel e: 0
Number of vowel i: 0
Number of vowel o: 0
Number of vowel u: 0


Process finished with exit code 0.


*/