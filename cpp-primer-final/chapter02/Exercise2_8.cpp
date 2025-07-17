//Exercise 2.8: Using escape sequences, write a program to print 2M followed by a new-line. Modify the program to print 2,
// then a tab, then an M, followed by a newline.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>

int main()
{
    std::cout << "\u0032" << "\115" << '\n' << "\u0032" << '\t' << "\115" << '\n';
    return 0;
}

#endif
/*
2M
2       M

Process finished with exit code 0.
 */