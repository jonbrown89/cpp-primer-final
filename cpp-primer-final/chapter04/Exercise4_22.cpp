//Exercise 4.22: Extend the program that assigned high pass, pass, and fail grades to also assign low pass for grades
// between 60 and 75 inclusive. Write two versions: One version that uses only conditional operators; the other should
// use one or more if statements. Which version do you think is easier to understand and why?
/*

        The if statements are much easier to understand. As mentioned as a tip in the book, the conditional operators
        should generally be avoided when nesting more than 2 or 3. The formatting can help in readability however this
        is in the upper limit of breaking the rule of not using nested conditional at 3. 


*/

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main()
{
    cout << "Enter grade: " << endl;
    for (unsigned g; cin >> g;)
    {
        auto result = g > 90 ? "high pass"
                                       : g < 60 ? "fail"
                                       : g < 75 ? "low pass" : "pass";
        cout << result << endl;

        if (g > 90)
        {
            cout << "high pass" << endl;
        }
        else if (g < 60)
        {
            cout << "fail" << endl;
        }
        else if (g < 75)
        {
            cout << "low pass" << endl;
        }
        else
            cout << "pass";
        cout << endl;
    }
    return 0;
}

#endif