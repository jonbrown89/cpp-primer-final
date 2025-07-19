//Exercise 2.28: Explain the following definitions. Identify any that are illegal.
/*
            (a) int i, *const cp;
            (b) int *p1, *const p2;
            (c) const int ic, &r = ic;
            (d) p3 = &ic;
            (e) const int *p;

            (a) illegal: cp is a const pointer that must be initialized when declared
            (b) illegal: p2 is a const pointer that must be initialized when declared
            (c) illegal: ic is a const int that must be initialized when declared. Cannot initialize a const variable
                         after declaration.
            (d) illegal: p3 is not declared
            (e) legal: declares a pointer to const int
 */