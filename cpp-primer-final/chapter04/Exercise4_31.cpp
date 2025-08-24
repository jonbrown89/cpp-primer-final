﻿//Exercise 4.31: The program in this section used the prefix increment and decrement operators. Explain why we used
// prefix and not postfix. What changed would have to be made to use the postfix versions? Rewrite the program using
// postfix operators.

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
    vector<int> ivec(10);
    vector<int>::size_type cnt = ivec.size();
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
        ivec[ix] = cnt;
    for (const auto &e : ivec)
        cout << e << " ";
    cout << endl;


    cnt = ivec.size();
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
        ivec[ix] = cnt;
    for (const auto &e : ivec)
        cout << e << " ";
    cout << endl;


    return 0;
}

#endif
/*
10 9 8 7 6 5 4 3 2 1
10 9 8 7 6 5 4 3 2 1

Process finished with exit code 0.


*/