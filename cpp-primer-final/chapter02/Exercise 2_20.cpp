//Exercise 2.20: What does the following program do?
/*
            int i = 42;
            int *p1 = &i;
            *p1 = *p1 * *p1;

            p1 pointer to i, i value changed to (42*42)
            
 */

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>

int main()
{
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    std::cout << "i = " << i << std::endl;

    return 0;
}


#endif
/*
i = 1764

Process finished with exit code 0.

 */