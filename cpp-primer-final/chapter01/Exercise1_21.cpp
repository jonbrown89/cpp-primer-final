//Exercise 1.21: Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this



#ifndef INACTIVE_EXERCISE

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    // first check that item1 and item2 represent the same book
    if (item1.isbn() == item2.isbn())
    {
        std::cout << item1 + item2 << std::endl;
        return 0; // indicate success
    } else
    {
        std::cerr << "Data must refer to same ISBN"
                  << std::endl;
        return -1; // indicate failure
    }
}
#endif
/*
0-201-78345-x 3 20.00
0-201-78345-x 2 25.00
0-201-78345-x 5 110 22

Process finished with exit code 0.

0-201-78345-x 3 20.00
0-202-78345-x 2 25.00
Data must refer to same ISBN

Process finished with exit code -1.
 */