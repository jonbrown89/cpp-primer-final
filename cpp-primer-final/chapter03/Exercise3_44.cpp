//Exercise 3.44: Rewrite the programs from the previous exercises using a type alias for the type of the loop control
// variables.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

    // range for to manage iteration
    // use type alias
    using int_array = int[4];
    for (int_array& p : ia)
        for (int q : p)
            cout << q << " ";
    cout << endl;

    // for loop using subscripts
    for (size_t i = 0; i != 3; ++i)
        for (size_t j = 0; j != 4; ++j)
            cout << ia[i][j] << " ";
    cout << endl;

    // using pointers
    // using type alias
    for (int_array* p = ia; p != ia + 3; ++p)
        for (int *q = *p; q != *p + 4; ++q)
            cout << *q << " ";
    cout << endl;
    
    return 0;
}

#endif
/*
0 1 2 3 4 5 6 7 8 9 10 11
0 1 2 3 4 5 6 7 8 9 10 11
0 1 2 3 4 5 6 7 8 9 10 11

Process finished with exit code 0.


*/