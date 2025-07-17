//Exercise 2.6: What, if any, are the differences between the following definitions:
/*
                    int month = 9, day = 7;
                    int month = 09, day = 07;


                    09 contains the digit 9, which isn't valid in octal, so most compilers will either treat it
                    as decimal or throw an error depending on the language and compiler settings.
                    07 is octal 7 so will output 7
 */

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this


#ifndef INACTIVE_EXERCISE
#include <iostream>
int main()
{
    int month = 9, day = 7;
    int month2 = 09, day2 = 07;

    std::cout << month << " " << day << " " << day2 << std::endl;
}


#endif

/*
9 7 7

Process finished with exit code 0.

 */