//Exercise 3.42: Write a program to copy a vector of ints into an array of ints.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <vector>
using std::vector;
using std::begin;
using std::end;
using std::cout;
using std::endl;

int main()
{
    vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr[10];
    for (int i = 0; i != v.size(); i++) arr[i] = v[i];

    for (auto i : arr) cout << i << " ";
    cout << endl;

    return 0;
}
#endif
/*
1 2 3 4 5 6 7 8 9 10

Process finished with exit code 0.


*/