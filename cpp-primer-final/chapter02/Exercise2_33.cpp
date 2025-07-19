//Exercise 2.33: Using the variable definitions from this section, determine what happens in each of these assignments:
/*
                a = 42;     b = 42;     c = 42;
                d = 42;     e = 42;     g = 42;


                a = 42; set 42 to int a
                b = 42; set 42 to int b
                c = 42; set 42 to int c
                d = 42; ERROR, d is an int *. Correction: *d = 42;
                e = 42; ERROR, e is a const int *. Correction: e = &c;
                g = 42; ERROR, g is a const int& that is bound to ci
 */