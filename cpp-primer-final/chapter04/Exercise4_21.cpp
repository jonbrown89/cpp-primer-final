//Exercise 4.21: Write a program to use a conditional operator to find the elements in a vector<int> that have odd value
// and double the value of each such element.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector <int> v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto i : v)
    {
        cout << ((i & 0x1) ? i * 2 : i) << " ";
    }
    cout << endl;
    return 0;
}
#endif