//Exercise 2.16: Which, if any, of the following assignments are invalid? If they are valid, explain what they do.
/*
                    int i = 0, &r1 = i; double d = 0, &r2 = d;
                    (a) r2 = 3.14159;
                    (b) r2 = r1;
                    (c) i = r2;
                    (d) r1 = d;


                    (a) valid: assigns 3.14159 to d since r2 is a reference to d
                               d becomes 3.14159
                    (b) valid: assigns the value of i to d, r1 refers to i r2 refers to d
                               d becomes 0.0 converting i's value from int to double
                    (c) valid: assings the value of d to i, r2 refers to d
                               i becomes the truncated integer value of 3.14159, i becomes 3
                    (d) valid: assigns the value of d to i, r1 refers to i
                               i becomes the truncated integer value of d



*/
