//Exercise 1.13: Rewrite the first two exercises from 1.4.1 (p.13) using for loops (Exercise 1.9, 1.10)
/*
Exercise 1.9 -
int main()
{
    int sum = 0, val = 50;
    // keep executing the while as long as val is less than or equal to 10
    while (val <= 100)
    {
        sum += val; // assigns sum + val to sum
        ++val;      // add 1 to val
    }
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;
    return 0;
}

Exercise 1.10 -
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
 */

//#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this
//#include <iostream>
//#ifndef INACTIVE_EXERCISE
//int main() //Exercise 1.9 using for loop instead, prints sum of 50 to 100 inclusive
//{
//    int sum = 0;
//    for (int i = 50; i <= 100; ++i)
//        sum += i;
//    std::cout << "The sum of 50 to 100 inclusive is: " << sum << std::endl;
//}

//#endif
/*
The sum of 50 to 100 inclusive is: 3825

Process finished with exit code 0.

 */
//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#include <iostream>
#ifndef INACTIVE_EXERCISE
int main() //Exercise 1.10 using for loop instead, print the numbers from 10 down to 0
{
    for (int i = 10; i >= 0; i--)
    {
        std::cout << i << std::endl;
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
