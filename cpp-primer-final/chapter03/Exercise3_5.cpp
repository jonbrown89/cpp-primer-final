//Exercise 3.5: Write a program to read strings from the standard input, concatenating what is read into one large string.
// Print the concatenated strings. Next, change the program to seperate adjacent input strings by a space.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE

#include <iostream>
#include <string>
using std::string;
using std::endl;
using std::cin;
using std::cout;
/*
int main()
{
    string concatenated;
    cout << "The strings you input will be concatenated into one large string: " << endl;
    for (string s1; cin >> s1; concatenated += s1);
    cout << "The concatenated string is: " << concatenated << endl;


    return 0;
}
*/

int main()
{
    string s1;
    for (string buffer; cin >> buffer; s1 += (s1.empty() ? "" : " ") + buffer);
    cout << "Seperated adjacent input strings by a space. " << s1 << endl;
    return 0;
}

#endif
/*
one
two
three
four
Seperated adjacent input strings by a space. one two three four

Process finished with exit code 
 */