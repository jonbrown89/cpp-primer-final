//Exercise 2.13: What is the value of j in the following program?
/*
            int i = 42;
            int main()
            {
                int i = 100;
                int j = i;
            }

            j = 100
 */

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>

int i = 42;

int main()
{
    int i = 100;
    int j = i;
    std::cout << j << std::endl;
    return 0;
}



#endif

/*
100

Process finished with exit code 0.

 */