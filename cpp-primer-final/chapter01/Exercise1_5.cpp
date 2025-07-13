//Exercise 1.5: We wrote the output in one large statement. Rewrite the program to use a separate statement
//  to print each operand.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#include <iostream>
#ifndef INACTIVE_EXERCISE
int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1=0, v2=0;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1 << " and " << v2 << " is: " << std::endl;
    std::cout << v1 * v2 << std::endl;
    return 0;
}
#endif

/*Enter two numbers:
8
20
The product of 8 and 20 is: 
160

Process finished with exit code 0.

 */