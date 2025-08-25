//Exercise 4.37: Rewrite each of the following old-style casts to use a named cast.
/*
    int i; double d;    const string *ps;   char *pc;   void *pv;
    (a) pv = (void*)ps;     (b) i = int(*pc);
    (c) pv = &d;            (d) pc = (char*) pv;

*/

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <string>
using std::string;

int main()
{
    int i = 0;
    double d = 0;
    string str("stringy");
    const string *ps = &str;
    char c = 'c';
    char *pc = &c;
    void *pv;

    // (a) pv = (void*)ps;
    pv = static_cast<void *>(const_cast<string *>(ps));

    // (b) i = int(*pc);
    i = static_cast<int>(*pc);

    // (c) pv = &d;
    pv = static_cast<void *>(&d);

    // (d) pc = (char*) pv;
    pc = static_cast<char *>(pv);
    
    return 0;
}

#endif