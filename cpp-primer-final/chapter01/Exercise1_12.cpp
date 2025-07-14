//Exercise 1.12: What does the following for loop do? What is the final value of sum?
/*
                int sum = 0;
                for (int i = -100; i <= 100; ++i)
                    sum += i;
 */
// The loop runs 201 times from (-100 to 100 inclusive) adding each number to the sum ending with sum = 0.
// Sum = 0 because sum of -100 to -1 = -5050, sum of 1 to 100 = 5050, plus 0 in the middle

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <ostream>

int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
        
    std::cout << sum << std::endl;
    return 0;
}
#endif
/*
0

Process finished with exit code 0.

 */