//Exercise 5.6: Rewrite your grading program to use the conditional operator (Section 4.7, page 151) in place of the
// if-else satement.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    const vector<string>possibleletter = { "F","D","C","B","A","A++"};
    string letter;
    int grade;
    cout << "Enter grade: " << endl;
    cin >> grade;
    letter = grade < 60 ? possibleletter[0] : possibleletter[(grade -50) / 10];
    cout << "Grade letter: " << letter << endl;
    return 0;
}

#endif
/*
Enter grade:
100
Grade letter: A++

Process finished with exit code 0.


*/