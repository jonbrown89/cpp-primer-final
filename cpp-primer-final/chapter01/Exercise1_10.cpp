//Exercise 1.10: In addition to the ++ operator that adds 1 to its operand, there is a decrement operator
// (--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#include <iostream>
#ifndef INACTIVE_EXERCISE
int main()
{
    int val = 11;
    while (val > 0)
    {
        --val;
        std::cout << val << std::endl;
    }
    
    return 0;
}

#endif
/*
10
9
8
7
6
5
4
3
2
1
0

Process finished with exit code 0.

 */