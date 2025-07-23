//Exercise 3.9: What does the following program do? Is it valid? If not, why not?
/*

            string s;
            cout << s[0] << endl;

            //Invalid: Undefined behavior because it is accessing s[0] on an empty string (s).
            
*/

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this
#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main()
{
    string s;
    cout << s[0] << endl;
    return 0;
}

#endif
/*


Process finished with exit code 0.

*/