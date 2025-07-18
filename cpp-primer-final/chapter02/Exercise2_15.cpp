//Exercise 2.15: Which of the following definitions, if any, are invalid? Why?
/*
            Which of the following definitions, if any, are invalid? Why?
            (a) int ival = 1.01;
            (b) int &rval1 = 1.01;
            (c) int &rval2 = ival;
            (d) int &rval3;

            (a) valid: data loss, truncates 1.01 to 1
            (b) invalid: cannot bind to literals or temporary values directly. 1.01 is a literal that would create a
                         temporary double, and you can't bind a non-const reference to a temporary.
            (c) valid: if ival is already defined, creates a reference to the existing variable ival. References to Ivalues
                       are legal
            (d) invalid: references must be initialized when declared. Unlike pointers, references cannot exist without
                         referring to something.
 */