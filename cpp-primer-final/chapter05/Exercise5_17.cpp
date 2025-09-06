//Exercise 5.17: Given two vectors of ints, write a program to determine whether one vector is a prefix of the other. For
// vectors of unequal length, compare the number of elements of the smaller vector. For example, given the vectors containing
// 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5, 6, respectively your program should return true.

#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v{0, 1, 1, 2};
    vector<int> v2{0, 1, 1, 2, 3, 5, 6};
    
    // Check if the smaller vector is a prefix of the larger one
    vector<int>* smaller = (v.size() <= v2.size()) ? &v : &v2;
    vector<int>* larger = (v.size() <= v2.size()) ? &v2 : &v;
    
    bool isPrefix = true;
    for (unsigned int i = 0; i < smaller->size(); i++) {
        if ((*smaller)[i] != (*larger)[i]) {
            isPrefix = false;
            break;
        }
    }
    
    cout << (isPrefix ? "true" : "false") << endl;
    return 0;
}

#endif