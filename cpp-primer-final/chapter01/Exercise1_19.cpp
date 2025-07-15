//Exercise 1.19: Revise the program you wrote for the exercises in Section 1.4.1 (p.13) that printed a range
// of numbers so that it handles input in which the first number is smaller than the second.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#include <iostream>
#ifndef INACTIVE_EXERCISE

int main()
{
    std::cout << "Enter two numbers: " << std::endl; // prompt for two integers
    int v1 = 0, v2 = 0, min = 0, max = 0;
    std::cin >> v1 >> v2;
    if (v1 < v2) // organize the numbers to min and max
    {
        max = v2;
        min = v1;
    } else
    {
        max = v1;
        min = v2;
    }
    for (int i = min; i <= max; ++i)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
#endif