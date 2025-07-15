//Exercise 1.25: Using the Sales_item.h header from the Web site, compile and execute the bookstore program
// presented in this section.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item total; // variable to hold data for the next transaction
    //  read the first transaction and ensure that there are data to process
    if (std::cin >> total)
    {
        Sales_item trans; // variable to hold the running sum
        //  read and process the remaining transactions
        while (std::cin >> trans)
        //  if we're still processing the same book
        {
            if (total.isbn() == trans.isbn())
                total += trans; // update the running total
            else
            //  print results for the previous book
            {
                std::cout << total << std::endl;
                total = trans; // total now refers to the next book
            }
        }
        std::cout << total << std::endl; // print the last transaction
    }
    else
    //  no input! warn the user
    {
        std::cerr << "No data" << std::endl;
        return -1;  //  indicate failure
    }
    return 0;
}
#endif
/*
0-201-78345-x 3 20.00
0-201-78345-x 2 25.00
0-202-78345-x 4 50.00
0-201-78345-x 5 110 22
0-203-78345-x 2 11.00
0-202-78345-x 4 200 50
0-203-78345-x 2 22 11

Process finished with exit code 0.

 */