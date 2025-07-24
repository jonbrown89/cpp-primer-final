//Exercise 3.20: Read a set of integers into a vector. Print the sum of each pair of adjacent elements. Change your program
// so that it prints the sum of the first and last elements, followed by the sum of the second and second-to-last, and so on.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;
/*
int main()
{
    vector<int> ivec;
    cout << "Please enter some integers: " << endl;

    for (int i; cin >> i; ivec.push_back(i));
    if (ivec.empty())
    {
        cout << "Input is empty." << endl;
        return -1;
    }
    if (ivec.size() == 1)
    {
        cout << "Only one integer, need more. " << endl;
        return -1;
    }
    for (int i = 0; i < ivec.size() - 1; ++i)
        cout << ivec[i] + ivec[i + 1] << " ";
    cout << endl;
    return 0;
}

#endif
*/
/*
Please enter some integers:
5
20
4
32

25 24 36 

Process finished with exit code 0.


*/

int main()
{
    vector<int> ivec;
    cout << "Please enter some integers: " << endl;
    for (int i; cin >> i; ivec.push_back(i));

    if (ivec.empty())
    {
        cout << "Input some integers." << endl;
        return -1;
    }
    auto size = (ivec.size() + 1) / 2;

    for (int i = 0; i != size; ++i)
        cout << ivec[i] + ivec[ivec.size() - i - 1] << " " << endl;
    cout << endl;
    
    return 0;
}

#endif
/*
Please enter some integers:
51
86
34
25
27

78 
111 
68 


Process finished with exit code 0.



*/