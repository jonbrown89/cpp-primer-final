//Exercise 3.40: Write a program to define two character arrays initialized from string literals. Now define a third character
// array to hold the concatenation of the two arrays. Use strcpy and strcat to copy the two arrays into the third.

#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <cstring>

using std::endl;
using std::cout;

const char cstr1[]="Hello";
const char cstr2[]="World";

int main()
{
    constexpr size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) +1;
    char cstr3[new_size];

    strcpy_s(cstr3, cstr1);
    strcat_s(cstr3, " ");
    strcat_s(cstr3, cstr2);

    cout << cstr3 << endl;
    
    return 0;
}


#endif