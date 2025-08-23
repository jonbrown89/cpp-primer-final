//Exercise 4.6: Write an expression to determine whether an int value is even or odd

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    if (x & 0x1)
    {
        cout << "Integer entered is odd." << endl;
    } else
    {
        cout << "Integer entered is even." << endl;
    }
    return 0;
}

#endif
/*
Enter an integer: 81
Integer entered is odd.

Process finished with exit code 0.


*/