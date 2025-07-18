//Exercise 2.18: Write code to change the value of a pointer. Write code to change the value to which the pointer points.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
int main()
{

    int i = 42, i2 = 44;
    int* p = &i;
    std::cout << "p = " << *p << std::endl;
    //change the value of a pointer.
    p = &i2;
    std::cout << "p = " << *p << std::endl;
    //change the value to which the pointer points.
    *p = 40;
    std::cout << "p = " << *p << std::endl;
    std::cout << "i = " << i << std::endl;
    std::cout << "i2 = " << i2 << std::endl;
    
    return 0;
}

#endif
/*
p = 42
p = 44
p = 40
i = 42
i2 = 40

Process finished with exit code 0.


 */