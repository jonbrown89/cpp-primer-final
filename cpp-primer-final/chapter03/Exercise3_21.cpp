//Exercise 3.21: Redo the first exercise from Section 3.3.3 (pg. 105) using iterators.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
    vector<int> v1;
    cout << "v1 size is: " << v1.size() << endl;
    cout << "v1 contents are: ";
    for (auto iter = v1.begin(); iter != v1.end(); ++iter)
        cout << *iter << (iter != v1.end() ? "," : "");
    cout << "\n" << endl;

    vector<int> v2(10);
    cout << "v2 size is: " << v2.size() << endl;
    cout << "v2 contents are: ";
    for (auto iter = v2.begin(); iter != v2.end(); ++iter)
        cout << *iter << (iter != v2.end() ? "," : "");
    cout << "\n" << endl;

    vector<int> v3(10, 42);
    cout << "v3 size is: " << v3.size() << endl;
    cout << "v3 contents are: ";
    for (auto iter = v3.begin(); iter != v3.end(); ++iter)
        cout << *iter << (iter != v3.end() ? "," : "");
    cout << "\n" << endl;

    vector<int> v4{ 10 };
    cout << "v4 size is: " << v4.size() << endl;
    cout << "v4 contents are: ";
    for (auto iter = v4.begin(); iter != v4.end(); ++iter)
        cout << *iter << (iter != v4.end() ? "," : "");
    cout << "\n" << endl;

    vector<int> v5{10, 42};
    cout << "v5 size is: " << v5.size() << endl;
    cout << "v5 contents are: ";
    for (auto iter = v5.begin(); iter != v5.end(); ++iter)
        cout << *iter << (iter != v5.end() ? "," : "");
    cout << "\n" << endl;

    vector<string> v6{ 10 };
    cout << "v6 size is: " << v6.size() << endl;
    cout << "v6 contents are: " << endl;
    for (auto iter = v6.begin(); iter != v6.end(); ++iter)
        cout << *iter << (iter != v6.end() ? "," : "");
    cout << "\n" << endl;

    vector<string> v7{10, "hi"};
    cout << "v7 size is: " << v7.size() << endl;
    cout << "v7 contents are: ";
    for (auto iter = v7.begin(); iter != v7.end(); ++iter)
        cout << *iter << (iter != v7.end() ? "," : "");
    cout << "\n" << endl;
    
    return 0;
}

#endif
/*
v1 size is: 0
v1 contents are:

v2 size is: 10
v2 contents are: 0,0,0,0,0,0,0,0,0,0,

v3 size is: 10
v3 contents are: 42,42,42,42,42,42,42,42,42,42,

v4 size is: 1
v4 contents are: 10,

v5 size is: 2
v5 contents are: 10,42,

v6 size is: 10
v6 contents are:
,,,,,,,,,,

v7 size is: 10
v7 contents are: hi,hi,hi,hi,hi,hi,hi,hi,hi,hi,


Process finished with exit code 0.


*/