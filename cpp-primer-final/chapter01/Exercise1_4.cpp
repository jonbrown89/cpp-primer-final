//Exercise 1.4: Our program used the addition operator, +, to add two numbers. Write a program that uses
//  the multiplication operator, *, to print the product instead.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#include <iostream>
#ifndef INACTIVE_EXERCISE
int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;
    return 0;
}
#endif
/*
*Enter two numbers:
8
20
The product of 8 and 20 is 160

Process finished with exit code 0.
 */