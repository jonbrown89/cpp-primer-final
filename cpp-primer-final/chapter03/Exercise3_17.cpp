//Exercise 3.17: Read a sequence of words from cin and store the values a vector. After you've read all the words,
// process the vector and change each word to uppercase. Print the transformed elements, eight words to a line.

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE

#include <iostream>
#include <string>
#include <vector>

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;


int main()
{
    vector<string> words;
    
    for (string word; cin >> word; words.push_back(word));
    for (auto &str : words) for (auto &c : str) c = toupper(c);

    for (string::size_type i = 0; i != words.size(); ++i)
    {
        if (i != 0 && i % 8 == 0) cout << endl;
        cout << words[i] << " ";
    }
    cout << endl;
    

    return 0;
}

#endif
/*
one two three four five six seven eight nine ten eleven

ONE TWO THREE FOUR FIVE SIX SEVEN EIGHT 
NINE TEN ELEVEN 

Process finished with exit code 0.

 */