//Exercise 3.23: Write a program to create a vector with ten int elements. Using an iterator, assign each element a value
// that is twice its current value. Test your program by printing the vector.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto it = v.begin(); it != v.end(); it++) *it *= 2;
    for (auto i : v) cout << i << " ";
        

    return 0;
}
#endif
/*
2 4 6 8 10 12 14 16 18 20
Process finished with exit code 0.


*/