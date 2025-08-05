//Exercise 3.32: Copy the array you defined in the previous exercise into another array. Rewrite your program to use vectors.

#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int main()
{
    
    int arr[10];
    for (int i = 0; i < 10; i++) arr[i] = i;

    vector<int> v(10);
    for (int i = 0; i < 10; i++) v[i] = arr[i];
    vector<int> v2(v);
    for (auto i : v2) cout << i << " ";
    cout << endl;

    return 0;
}



#endif