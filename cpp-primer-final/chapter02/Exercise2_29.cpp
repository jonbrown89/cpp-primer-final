//Exercise 2.29: Using the variables in the previous exercise, which of the following assignments are legal? Explain why.
/*
                (a) i = ic;
                (b) p1 = p3;
                (c) p1 = &ic;
                (d) p3 = &ic;
                (e) p2 = p1;
                (f) ic = *p3;

                (a) legal
                (b) illegal: p3 is a const pointer to const int
                (c) illegal: ic is a const int
                (d) illegal: p3 is a const pointer
                (e) illegal: p2 is a const pointer
                (f) illegal: ic is a const int
 */