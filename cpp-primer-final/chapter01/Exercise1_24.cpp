//Exercise 1.24: Test the previous program by giving multiple transactions representing multiple ISBNs.
// The records for each ISBN should be grouped together.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem, valItem; // variables to hold data for current ISBN and multiple transaction valItem ISBN
    if (std::cin >> currItem)
    {
        int cnt = 1; // transaction count
        while (std::cin >> valItem) // start transaction loop
        {
            if (valItem.isbn() == currItem.isbn()) // check for same isbn for transaction count
            {
                ++cnt; // increase the count for number of transactions
            }
            else // isbn doesn't match
            {
                // print the isbn and transaction count
                std::cout << currItem << " occurs " << cnt << " times " << std::endl;
                // reset transactions
                currItem = valItem;
                cnt = 1;
            }
        }
        // print the isbn and transaction count
        std::cout << currItem << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}
#endif
/*
0-201-78345-x 3 20.00
0-201-78345-x 2 25.00
0-202-78345-x 9 11.00
0-201-78345-x 3 60 20 occurs 2 times 
0-203-78345-x 4 5.00
0-202-78345-x 9 99 11 occurs 1 times 
0-203-78345-x 4 20 5 occurs 1 times

Process finished with exit code 0.

 */