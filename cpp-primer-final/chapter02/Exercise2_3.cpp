//Exercise 2.3: What output will the following code produce?
/*
                    unsigned u = 10, u2 = 42;
                    std::cout << u2 - u << std::endl;       32
                    std::cout << u - u2 << std::endl;       4294967264

                    int i = 10, i2 = 42;
                    std::cout << i2 - i << std::endl;       32
                    std::cout << i - i2 << std::endl;       -32

                    std::cout << i - u << std::endl;        0
                    std::cout << u - i << std::endl;        0
 */

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;

    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;

    


    return 0;
}


#endif
/*
32
4294967264
32
-32
0
0

Process finished with exit code 0.

 */