//Exercise 3.14: Write a program to read a sequence of ints from cin and store those values in a vector.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE

#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
   vector<int> numbers;
   int value;

   cout << "Enter integers: " << endl;
   while (cin >> value)
   {
      numbers.push_back(value);
   }
   cout << "\nVector elements: " << endl;
   for (const int& num : numbers)
   {
      cout << num << " ";
   }
   cout << endl;
   cout << "Total numbers entered: " << numbers.size() << endl;
   return 0;
}

#endif
/*
Enter integers:
1 2 3 4 5 6 52

Vector elements: 
1 2 3 4 5 6 52 
Total numbers entered: 7

Process finished with exit code 0.


*/