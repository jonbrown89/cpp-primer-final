//Exercise 4.34: Given the variable definitions in this section, explain what conversions take place in the following
// expressions:
/*
        (a) if (fval)   (b) dval = fval + ival;         (c) dval + ival * cval;

        Remember that you may need to consider the associativity of the operators.

        (a) fval is converted to bool           (b) ival is converted to float then added to fval. result converted to double
        (c) cval is converted to int and multiplied by ival. result converted to double and added to dval.

*/