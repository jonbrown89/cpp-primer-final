//Exercise 1.20: Copy Sales_item.h file to your working directory. Use it to write a program that reads a set of
// book sales transactions, writing each transaction to the standard output.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this



#ifndef INACTIVE_EXERCISE

#include <iostream>
#include "Sales_item.h"

int main()
{
    for (Sales_item item; std::cin >> item; std::cout << item << std::endl);
    return 0;
}
#endif

/*
0-201-78345-x 3 20.00
0-201-78345-x 3 60 20
0-201-78345-x 2 25.00
0-201-78345-x 2 50 25

Process finished with exit code 0.
 */