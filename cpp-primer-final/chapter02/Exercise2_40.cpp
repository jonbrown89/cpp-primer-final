//Exercise 2.40: Write your own version of the Sales_data class.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <string>

int main()
{
    struct Sales_data
    {
        std::string bookNo;
        std::string bookName;
        unsigned units_sold = 0;
        double revenue = 0.0;
        double price = 0.0;
    };
    return 0;
}


#endif