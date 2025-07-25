﻿//Exercise 3.16: Write a program to print the size and contents of the vectors from exercise 3.13.
// Check whether your answers to that exercise were correct.
// If not, restudy Section 3.3.1 (pg. 97) until you understand why you were wrong.

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
    cout << "{\n \"v1\":{\"size\":\"" << v1.size() << "\",\"value\":[";
    for (auto i : v1)
        cout << i << ",";
    if (!v1.empty()) cout << "\b";
    cout << "]}" << endl;

    vector<int> v2(10);
    cout << " \"v2\":{\"size\":\"" << v2.size() << "\",\"value\":[";
    for (auto i : v2)
        cout << i << ",";
    if (!v2.empty()) cout << "\b";
    cout << "]}" << endl;

    vector<int> v3(10, 42);
    cout << " \"v3\":{\"size\":\"" << v3.size() << "\",\"value\":[";
    for (auto i : v3)
        cout << i << ",";
    if (!v3.empty()) cout << "\b";
    cout << "]}" << endl;

    vector<int> v4{ 10 };
    cout << " \"v4\":{\"size\":\"" << v4.size() << "\",\"value\":[";
    for (auto i : v4)
        cout << i << ",";
    if (!v4.empty()) cout << "\b";
    cout << "]}" << endl;

    vector<int> v5{ 10, 42 };
    cout << " \"v5\":{\"size\":\"" << v5.size() << "\",\"value\":[";
    for (auto i : v5)
        cout << i << ",";
    if (!v5.empty()) cout << "\b";
    cout << "]}" << endl;

    vector<string> v6{ 10 };
    cout << " \"v6\":{\"size\":\"" << v6.size() << "\",\"value\":[";
    for (auto i : v6)
        if (i.empty()) cout << "(null)" << ",";
        else cout << i << ",";
    if (!v6.empty()) cout << "\b";
    cout << "]}" << endl;

    vector<string> v7{ 10, "hi" };
    cout << " \"v7\":{\"size\":\"" << v7.size() << "\",\"value\":[";
    for (auto i : v7)
        if (i.empty()) cout << "(null)" << ",";
        else cout << i << ",";
    if (!v7.empty()) cout << "\b";
    cout << "]}\n}" << endl;

    return 0;
}

#endif
/*
{
 "v1":{"size":"0","value":[]}
 "v2":{"size":"10","value":[0,0,0,0,0,0,0,0,0,0]}
 "v3":{"size":"10","value":[42,42,42,42,42,42,42,42,42,42]}
 "v4":{"size":"1","value":[10]}
 "v5":{"size":"2","value":[10,42]}
 "v6":{"size":"10","value":[(null),(null),(null),(null),(null),(null),(null),(null),(null),(null)]}
 "v7":{"size":"10","value":[hi,hi,hi,hi,hi,hi,hi,hi,hi,hi]}
}

Process finished with exit code 0.


*/