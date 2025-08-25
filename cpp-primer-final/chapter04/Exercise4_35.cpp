//Exercise 4.35: Given the following definitions,
/*
        char cval;      int ival;       unsigned int ui;
        float fval;     double dval;

        Identify the implicit type conversions, if any, taking place:
        
        (a) cval = 'a' + 3;             (b) fval = ui - ival * 1.0;
        (c) dval = ui * fval;           (d) cval = ival + fval + dval;


*/

//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
#include <iostream>
using std::cout;
using std::endl;

int main()
{
        char cval = 0;
        int ival = 0;
        unsigned int ui = 0;
        float fval = 0;
        double dval = 0;

        cval = 'a' + 3;
        // a is promoted to int and added to 3 then converted to char
        
        fval = ui - ival * 1.0;
        // ival is converted to double then multiplied by 1.0 the converted to unsigned int and subtracted by ui.
        // result is converted to float
        
        dval = ui * fval;
        // ui is converted to float then multiplied by fval. result converted to double
        
        cval = ival + fval + dval;
        // ival is converted to float and added to fval. converted to double and added to dval. result converted to char

        
        cout << "cval type = " << typeid(cval).name() << endl;
        cout << "ival type = " << typeid(ival).name() << endl;
        cout << "ui type = " << typeid(ui).name() << endl;
        cout << "fval type = " << typeid(fval).name() << endl;
        cout << "dval type = " << typeid(dval).name() << endl;
        
        
        
        return 0;
}
#endif
/*
cval type = char
ival type = int
ui type = unsigned int
fval type = float
dval type = double

Process finished with exit code 0.

*/