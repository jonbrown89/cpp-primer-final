//Exercise 2.22: Assuming p is a pointer to int, explain the following code:
/*
            if (p) // ...
            if (*p) // ...


            if (p) // ... checks whether the pointer p is not null, meaning tests if p points to valid memory location
            if (*p) // ... checks whether the value that p points to is non-zero, will crash is p is null
 */