//Exercise 3.24: Redo the last exercise from Section 3.3.3 (pg 105) using iterators.

#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    vector<int> v;
    cout << "Enter at least two integers: " << endl;
    for (int buffer; cin >> buffer; v.push_back(buffer));

    if (v.size() < 2 )
    {
        cout << "Please enter at least two integers";
        return -1;
    }

    for (auto it = v.cbegin(); it + 1 != v.cend(); it++)
        cout << *it + *(it + 1) << " ";
    cout << endl;

    for (auto lft = v.cbegin(), rht = v.cend() - 1; lft <= rht; ++lft, --rht)
        cout << *lft + *rht << " ";
    cout << endl;
    
    return 0;
}

#endif
/*

Enter at least two integers:
14
82
861
23
34

96 943 884 57 
48 105 1722 

Process finished with exit code 0.


*/