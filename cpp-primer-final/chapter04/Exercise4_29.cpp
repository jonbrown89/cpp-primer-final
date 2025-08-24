//Exercise 4.29: Predict the output of the following code and explain your reasoning. Now run the program. Is the output
// what you expected? If not, figure out why.
/*
        int x[10];  int *p = x;
        cout << sizeof(x)/sizeof(*x) << endl;
        cout << sizeof(p)/sizeof(*p) << endl;

        returns the number of elements in x. 10
        undefined. size of pointer divided by size of pointer type (bugprone)
 */

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int x[10];  int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;
    //cout << sizeof(p)/sizeof(*p) << endl;


    return 0;
}


#endif