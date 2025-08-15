//Exercise 3.43: Write three different versions of a program to print the elements of ia. One version should use a range
// for to manage the iteration, the other two should use an ordinary for loop in one case using subscripts and in the other
// using pointers. In all t hree programs write all the types directly. That i__cpp_capture_star_this, do not use a type
// alias, auto, or decltype to simplify the code.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int arr[3][4] = {
        { 0, 1, 2, 3 },
        { 4, 5, 6, 7 },
        { 8, 9, 10, 11 }
    };
    // range for
    for (const int(&row)[4] : arr)
        for (int col : row) cout << col << " ";
    cout << endl;
    // for loop
    for (size_t i = 0; i != 3; ++i)
        for (size_t j = 0; j != 4; ++j) cout << arr[i][j] << " ";
    cout << endl;
    // using pointers.
    for (int(*row)[4] = arr; row != arr + 3; ++row)
        for (int *col = *row; col != *row + 4; ++col) cout << *col << " ";
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