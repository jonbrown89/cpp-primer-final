//Exercise 1.20: Copy Sales_item.h file to your working directory. Use it to write a program that reads a set of
// book sales transactions, writing each transaction to the standard output.

#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this

#include <iostream>
#include "Sales_item.h"

#ifndef INACTIVE_EXERCISE



int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2; // read a pair of transactions
    std::cout << item1 + item2 << std::endl; // print their sum
    return 0;
}
#endif