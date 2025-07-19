//Exercise 2.42: Write your own version of the Sales_data.h header and use it to rewrite the exercise from Section 2.6.2
// (pg. 76)

//#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this
/*
#ifndef INACTIVE_EXERCISE
#include <iostream>
#include "Exercise2_42.h"

int main()
{
    Sales_data book;
    double price;
    std::cin >> book.bookNo >> book.units_sold >> price;
    book.CalcRevenue(price);
    book.Print();
    
    return 0;
}


#endif
*/
/*
0-201-78345-x 3 20.00
0-201-78345-x 3 60 
20

Process finished with exit code 0.


*/
/*
#define CURRENT_EXERCISE // Uncomment out when working on this
//#define IINACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include "Exercise2_42.h"

int main()
{
    Sales_data book1, book2;
    double price1, price2;
    std::cin >> book1.bookNo >> book1.units_sold >> price1;
    std::cin >> book2.bookNo >> book2.units_sold >> price2;
    book1.CalcRevenue(price1);
    book2.CalcRevenue(price2);

    if (book1.bookNo == book2.bookNo)
    {
        book1.AddData(book2);
        book1.Print();
        return 0;
    }
    else
    {
        std::cerr << "Must be same ISBN" << std::endl;
        return -1;
    }
}

#endif
*/
/*
0-201-78345-x 3 20.00
0-201-78345-x 3 60.00
0-201-78345-x 6 240 
40

Process finished with exit code 0.


*/
//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include "Exercise2_42.h"

int main()
{
    Sales_data total;
    double totalPrice;
    if (std::cin >> total.bookNo >> total.units_sold >> totalPrice)
    {
        total.CalcRevenue(totalPrice);
        Sales_data trans;
        double transPrice;
        while (std::cin >> trans.bookNo >> trans.units_sold >> transPrice)
        {
            trans.CalcRevenue(transPrice);
            if (total.bookNo == trans.bookNo)
            {
                total.AddData(trans);
            }
            else
            {
                total.Print();
                total.SetData(trans);
            }
        }
        total.Print();
        return 0;
    }
    else
    {
        std::cerr << "No data" << std::endl;
        return -1;
    }
    
}

#endif
/*
0-201-78345-x 3 20.00
0-201-78345-x 3 60.00
0-202-78345-x 5 21.00
0-201-78345-x 6 240 
40
0-202-78345-x 5 105
21

Process finished with exit code 0.


*/