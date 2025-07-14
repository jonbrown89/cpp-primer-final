//Exercise 1.11: Write a program that prompts the user for two integers. Print each number in the range
// specified by those two integers

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#include <iostream>
#ifndef INACTIVE_EXERCISE

int main()
{
    std::cout << "Enter two numbers:" << std::endl; //prompt for two integers
    int v1 = 0, v2 = 0, v3 = 0, v4 = 0, val = 0;
    std::cin >> v3 >> v4;
    if (v3 > v4) //organize the numbers v3 and v4 so that v1 is the lower value
    {
        v2 = v3;
        v1 = v4;
        val = v3;
        while (val >= v1)    //while loop to print each number in the range
        {
            
            std::cout << val << std::endl;
            --val;
        }
    } else
    {
        v1 = v3;
        v2 = v4;
        val = v4;
        while (val >= v1)    //while loop to print each number in the range
        {
            
            std::cout << val << std::endl;
            --val;
        }
    }
    return 0;
}

#endif
/*
Enter two numbers:
22
4
22
21
20
19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4

Process finished with exit code 0.

 */