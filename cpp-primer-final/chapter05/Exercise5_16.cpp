//Exercise 5.16: The while loop is particularly good at executing while some condition holds; for example, when we need
// to read values until end-of-file. The for loop is generally thought of a step loop: An index steps through a range of
// values in a collection. Write an idiomatic use of each loop and then rewrite each using the other loop construct. If
// you could use only one loop, which would you choose? Why?


/*
I would choose the for loop. I find for loop to be more flexible than the while loop

*/

#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::cin;

int main()
{
    int i;
    while (cin >> i)
    {
        /* ... */
    }
    for (int j; cin >> j;)
    {
        /* ... */
    }

    vector<int> iv(10, 1);
    for (auto it = iv.begin(); it != iv.end(); ++it)
    {
        /* ... */
    }
    auto it2 = iv.begin();
    while (it2 != iv.end())
    {
        ++it2;
        /* ... */
    }
    return 0;
}

#endif