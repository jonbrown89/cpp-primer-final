//Exercise 5.14: Write a program to read strings from standard input looking for duplicated words. The program should
// find places in the input where one word is followed immediately by itself. Keep track of the largest number of times
// a single repetition occurs and which word is repeated. Print the maximum number of duplicates, or else print a
// message saying that no word was repeated. For example, if the input is
//          how now now now brown cow cow
// the output should indicate that the word now occured three times.

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
    string word, duplicatedWord, maxDuplicatedWord;
    unsigned cnt = 0, maxCnt = 0;
    while (cin >> word)
    {
        if (word == duplicatedWord)
            ++cnt;
        else
        {
            if (cnt > maxCnt)
            {
                maxDuplicatedWord = duplicatedWord;
                maxCnt = cnt;
            }
            duplicatedWord = word;
            cnt = 1;
        }
    }
    if (cnt > maxCnt)
    {
        maxDuplicatedWord = duplicatedWord;
        maxCnt = cnt;
    }
    if (maxCnt > 1)
    {
        cout << maxDuplicatedWord << " occurs " << maxCnt << " times." << endl;
    }
    else
    {
        cout << "No word was repeated." << endl;
    }
    return 0;
}
#endif
/*
how now now now brown cow cow

now occurs 3 times.

Process finished with exit code 0.
*/