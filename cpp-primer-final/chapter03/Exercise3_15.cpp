//Exercise 3.15: Repeat the previous program but read strings this time.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    vector<string> words;
    string value;
    cout << "Please enter a string: " << endl;

    while (cin >> value)
    {
        words.push_back(value);
    }
    cout << "\nVector elements: " << endl;
    for (const string& word : words)
    {
        cout << word << " " << endl;
    }
    cout << endl;
    cout << "Total words entered: " << words.size() << endl;
}

#endif
/*
Please enter a string:
one
two
three

Vector elements: 
one
two 
three 

Total words entered: 3

Process finished with exit code 0.

*/