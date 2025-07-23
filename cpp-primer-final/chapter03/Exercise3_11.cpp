//Exercise 3.11: Is the following range for legal? If so, what is the type of c?

//              const string s = "Keep out!";
//              for (auto &c : s) { /* ... */ }
//              legal as is. the type of c = const char& 

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    const string s = "Keep out!";
    for (auto &c : s) { /* ... */ }
    return 0;
}


#endif


