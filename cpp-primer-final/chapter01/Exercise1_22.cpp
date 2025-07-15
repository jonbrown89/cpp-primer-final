//Exercise 1.22: Write a program that reads several transactions for the same ISBN. Write the sum of all
// the transactions that were read.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this



#ifndef INACTIVE_EXERCISE

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total; // variable to hold data for the next transaction
    // read the first transaction and ensure that there are data to process
    if (std::cin >> total)
    {
        Sales_item trans;   // variable to hold the running sum
        //  read and process the remaining transactions
        while (std::cin >> trans)
            //  if we're still processing the same book
        {
            if (total.isbn() == trans.isbn())
                total += trans; //  update the running total
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
        return -1; //   indicate failure
    }
    
    return 0;
}

#endif
/*
0-201-78345-x 3 20.00
0-201-78345-x 2 25.00
0-202-78345-x 4 11.00
0-201-78345-x 5 110 22

0-202-78345-x 4 44 11

Process finished with exit code 0.

5

No data

Process finished with exit code -1.


 */