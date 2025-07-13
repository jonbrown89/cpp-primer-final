//Exercise 1.6: Explain whether the following program fragment is legal.
/*
 * std::cout << "The sum of " << v1;
 *          << " and " << v2;
 *          << " is " << v1 + v2 << std::endl;
 */
// if the program is legal, what does it do? if the program is not legal, why not? How would you fix it?

#include <iostream>
//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
        

#endif
/*
 *The program fragment is not legal due to syntax errors. the semicolon is stopping the fragment from being
 *a continuous expression. This can be fixed by either removing the semi colons from v1 and v2 so it is a
 *continuous expression, or putting a std::cout on each line.
 *
 *Option 1:
 *std::cout << "The sum of " << v1
 *          << " and " << v2
 *          << " is " << v1 + v2 << std::endl;
 *
 *Option 2:
 *std::cout << "The sum of " << v1;
 *std::cout << " and " << v2;
 *std::cout << " is " << v1 + v2 << std::endl;
 *
 *Option 1 is more efficient since it's a single operation, while the second option works but is three separate
 *operations.
 */