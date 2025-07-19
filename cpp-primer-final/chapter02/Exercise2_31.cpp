//Exercise 2.31: Given the declarations in the previous exercise determine whether the following assignments are legal.
//  Explain how the top-level or low-level const applies in each case.
/*
        r1 = v2;
        p1 = p2;
        p1 = p3;
        p2 = p1;
        p2 = p3;


        r1 = v2; legal: r1 refers to v1. Assigns the value of v2 to v1. top-level const is ignored in copy operations.
                        copy the value not the const
        p1 = p2; illegal: p1 is int but p2 is const int*. Cannot assign a pointer-to-const to a pointer-to-non-const
                          low-level const violation
        p1 = p3; illegal: p3 is const int* const so it points to const data. Assigning to p1 would violate low-level const
                          low-level const violation
        p2 = p1; legal: p1 is int* and p2 is const int*

        p2 = p3; legal: both point to const data. top-level const of p3 doesn't prevent copying its value to p2
        
 */