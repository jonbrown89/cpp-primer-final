//Exercise 2.41: Use your Sales_data class to rewrite the exercises in Section 1.5.1 (p. 22), Section 1.5.2 (p. 24),
// and Section 1.6 (p. 25). For now, you should define your Sales_data class in the same file as your main function.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data book;
    double price;
    std::cin >> book.bookNo >> book.units_sold >> price;
    book.revenue = book.units_sold * price;
    std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " " << price;

    return 0;
}



#endif
/*
0-201-78345-x 3 20.00
0-201-78345-x 3 60 20
Process finished with exit code 0.

 */