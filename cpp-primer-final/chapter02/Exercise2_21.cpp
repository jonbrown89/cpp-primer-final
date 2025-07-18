//Exercise 2.21: Explain each of the following definitions. Indicate whether any are illegal and, if so, why.
/*
            int i = 0;
            (a) double* dp = &i;
            (b) int *ip = i;
            (c) int *p = &i;

            (a) illegal: type mismatch, pointer to int but trying to assign to pointer double
            (b) illegal: cant assign integer values to pointers without explicit casting
            (c) legal: correctly assigns address of i to pointer p
 */