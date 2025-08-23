//Exercise 4.4: Parenthesize the following expression to show how it is evaluated. Test your answer by compiling the expression
// (without parentheses) and printing its result.
//                  12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
//                  ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2)
//                          16 + 75 + 0 = 91

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int test = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    cout << test << endl;
    return 0;
}



#endif
/*
91

Process finished with exit code 0.


*/