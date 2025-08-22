//Exercise 4.1: What is the value returned by 5 + 10 * 20 / 2?
//                      answer: 105
//                      reason: L to R it will do multiply/divide(higher precedence group) first, then
//                      L to R addition/subtraction(lower precedence group)

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>

int main()
{
    int answer = 5 + 10 * 20 / 2;
    std::cout << answer << std::endl;
    return 0;
}

#endif
/*
105

Process finished with exit code 0.

 */