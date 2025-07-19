//Exercise 2.34: Write a program containing the variables and assignments from the previous exercise. Print the
// variables before and after the assignments to check whether your predictions in the previous exercise were correct.
// If not, study the examples until you can convince yourself you know what led you to the wrong conclusion.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
int main()
{
    int i = 0, &r = i;
    auto a = r; // a is an int (r is an alias for i, which has type int)

    const int ci = i, &cr = ci;
    auto b = ci;    // b is an int (top-level const in ci is dropped)
    auto c = cr;    // c is an int (cr is an alias for ci whose const is top-level)
    auto d = &i;   // d is an int* (& of an int object is int*)
    auto e = &ci; // e is const int* (& of a const object is low-level const)

    const auto f = ci; // deduced type of ci is int; f has type const int
    auto &g = ci; // g is a const int& that is bound to ci
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;

    a = 42; b = 42; c = 42; *d = 42; e = &c;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;

    return 0;
}

#endif
/*
a = 0
b = 0
c = 0
d = 000000167737F8E4
e = 000000167737F944
a = 42
b = 42
c = 42
d = 000000167737F8E4
e = 000000167737F9A4

Process finished with exit code 0.

 */