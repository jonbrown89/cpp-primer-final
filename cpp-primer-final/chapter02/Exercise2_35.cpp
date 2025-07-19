//Exercise 2.35: Determine the types deduced in each of the following definitions. Once you've figured out the types,
// write a program to see whether you were correct.
/*
        const int i = 42;
        auto j = i; const auto &k = i; auto *p = &i;
        const auto j2 = i, &k2 = i;

        j is int, k is const int&, p is const int*, j2 is const int, k2 is const int&
 */
//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <typeinfo>

int main()
{
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    std::cout << "j = " << typeid(j).name() << std::endl;
    std::cout << "k = " << typeid(k).name() << std::endl;
    std::cout << "p = " << typeid(p).name() << std::endl;
    std::cout << "j2 = " << typeid(j2).name() << std::endl;
    std::cout << "k2 = " << typeid(k2).name() << std::endl;



    return 0;
}

#endif
/*
j = int
k = int
p = int const * __ptr64
j2 = int
k2 = int

Process finished with exit code 0.

 */