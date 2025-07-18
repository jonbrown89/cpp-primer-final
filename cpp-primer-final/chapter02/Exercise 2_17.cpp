//Exercise 2.17: What does the following code print?
/*
            int i, &ri = i;
            i = 5; ri = 10;
            std::cout << i << " " << ri << std::endl;


            prints 10 10



 */

#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
int main()
{
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;


    return 0;
}

#endif
/*
10 10

Process finished with exit code 0.

 */