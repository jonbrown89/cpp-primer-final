//Exercise 3.25: Rewrite the grade clustering program from Section 3.3.3 (pg 104) using iterators instead of subscripts.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    vector<unsigned> scores(11, 0);
    cout << "Enter some grades: " << endl;
    for (unsigned grade; cin >> grade;/* */)
        if (grade <= 100)
            ++*(scores.begin() + grade / 10);

    for (auto s : scores)
        cout << s << " ";
    cout << endl;
    
    return 0;
}



#endif
/*
Enter some grades:
10
20
30
40
50
60
70
75
80
85
92
94
99
100

0 1 1 1 1 1 1 2 2 3 1 

Process finished with exit code 0.


*/