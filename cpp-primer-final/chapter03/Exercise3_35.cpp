//Exercise 3.35: Using pointers, write a program to set the elements in an array to zero.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const int size = 10;
    int arr[size];
    for (auto ptr = arr; ptr != arr + size; ++ptr) *ptr = 0;

    for (auto i : arr) cout << i << " ";
    cout << endl;
    return 0;
}


#endif
/*
0 0 0 0 0 0 0 0 0 0

Process finished with exit code 0.


*/