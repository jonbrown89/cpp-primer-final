//Exercise 2.27: Which of the following initializations are legal? Explain why.
/*
                (a) int i = -1, &r = 0
                (b) int *const p2 = &i2;
                (c) const int i = -1, &r = 0;
                (d) const int *const p3 = &i2;
                (e) const int *p1 = &i2;
                (f) const int &const r2;
                (g) const int i2 = i, &r = i;

                (a) illegal: &r = 0 tries to bind a non-const reference to a literal. Non-const references cannot bind
                             to literals or temporaries.
                (b) legal: assuming i2 exists
                (c) legal
                (d) legal: assuming i2 exists
                (e) legal: assuming i2 exists
                (f) illegal: const is redundant and illegal syntax, references must be initialized
                (g) legal: assuming i exists
 */