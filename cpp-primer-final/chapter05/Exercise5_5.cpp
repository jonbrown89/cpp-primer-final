//Exercise 5.5: Using an if-else statement, write your own version of the program to generate the letter grade from a
// numeric grade.

//#define CURRENT_EXERCISE // Uncomment this out when working on it
#define INACTIVE_EXERCISE // Comment this out when working on it

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
    if (grade >= 60)
        letter = possibleletter[(grade - 50) / 10];
    else
        letter = possibleletter[0];
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