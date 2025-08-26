//Exercise 5.3: Use the comma operator (Section 4.10, page 157) to rewrite the while loop from Section 1.4.1 (page 11)
// so that it no longer requires a block. Explain whether this rewrite improves or diminishes the readability of this code.
// diminishes the readability
//
//


//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int sum = 0, val = 1;
    //while (val <= 10 && (sum += val++)) ;
    while (val <= 10 && (sum += val, ++val)) ;  //null
    
    cout << "Sum of 1 to 10 inclusive is : " << sum << endl;
    
    return 0;
}
#endif