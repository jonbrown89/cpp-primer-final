//Exercise 3.1: Rewrite the exercises from Section 1.4.1 (pg. 13) and Section 2.6.2 (pg. 76) with the appropriate using
// declarations.

/*
#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int sum = 0, val = 50;
    // keep executing the while as long as val is less than or equal to 10
    while (val <= 100)
    {
        sum += val; // assigns sum + val to sum
        ++val;      // add 1 to val
    }
    cout << "Sum of 50 to 100 inclusive is "
         << sum << endl;
    return 0;
}
#endif
*/
/*
Sum of 50 to 100 inclusive is 3825

Process finished with exit code 0.


*/
//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <string>
#include "../Chapter02/Exercise2_42.h"
using std::cin;
using std::endl;
using std::cerr;

int main()
{
    Sales_data total;
    double totalPrice;
    if (cin >> total.bookNo >> total.units_sold >> totalPrice)
    {
        total.CalcRevenue(totalPrice);
        Sales_data trans;
        double transPrice;
        while (cin >> trans.bookNo >> trans.units_sold >> transPrice)
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
        cerr << "No data" << endl;
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