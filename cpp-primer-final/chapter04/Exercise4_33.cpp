//Exercise 4.33: Using table 4.12 (page 166) explain what the following expression does:
/*
            someValue ? ++x, ++y : --x, --y

if someValue is true, ++x and y
if someValue is false, --x and --y

same as         someValue ? (++x, y) : (--x, --y)





*/

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    bool someValue = false;
    int x = 50;
    int y = 42;

    cout << "int x: \t" << x << endl;
    cout << "int y: \t" << y << endl;
    cout << std::boolalpha;

    if (someValue ? ++x, ++y : --x, --y)
    {
        cout << "someValue: "<< someValue << endl;
        cout << "int x: \t" << x << endl;
        cout << "int y: \t" << y << endl;
    }
    


    return 0;
}
#endif
/*
int x:  50
int y:  42
someValue: false
int x:  49
int y:  41

Process finished with exit code 0.

int x:  50
int y:  42
someValue: true
int x:  51
int y:  42

Process finished with exit code 0.


*/