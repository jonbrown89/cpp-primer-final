//Exercise 2.14: Is the following program legal? if so, what values are printed?
/*
            int i = 100, sum = 0;
            for (int i = 0; i != 10; ++i)
                sum += i;
            std::cout << i << " " << sum << std::endl;

            legal: i = 100 sum = 45
            prints 'i' 'sum'
 */

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;
    return 0;
}


#endif
/*
100 45

Process finished with exit code 0.

 */