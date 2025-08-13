//Exercise 3.41: Write a program to initialize a vector from an array of ints.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v(begin(arr), end(arr));

    for (auto i : v) cout << i << " ";
    cout << endl;
    
    return 0;
    
}

#endif
/*
1 2 3 4 5 6 7 8 9 10

Process finished with exit code 0.


*/