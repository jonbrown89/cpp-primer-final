//Exercise 3.31: Write a program to define an array of ten ints. Give each element the same value as its position in
// the array.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int arr[10];
    for (auto i  = 0; i < 10; ++i) arr[i] = i;
    for (auto i : arr) cout << i << " ";
    cout << endl;

    return 0;
}

#endif
/*
0 1 2 3 4 5 6 7 8 9

Process finished with exit code 0.


*/