//Exercise 3.40: Write a program to define two character arrays initialized from string literals. Now define a third character
// array to hold the concatenation of the two arrays. Use strcpy and strcat to copy the two arrays into the third.

#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <cstring>

using std::endl;
using std::cout;


int main()
{
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char result[50];

    strcpy_s(result, str1);

    strcat_s(result, str2);

    cout << "First string: " << str1 << endl;
    cout << "Second string: " << str2 << endl;
    cout << "Concatenated result: " << result << endl;
    cout << "Length of result: " << strlen(result) << endl;
    
    return 0;
}

#endif
/*
First string: Hello,
Second string: World!
Concatenated result: Hello, World!
Length of result: 13

Process finished with exit code 0.


*/