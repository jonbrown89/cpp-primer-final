﻿//Exercise 2.24: Why is the initialization of p legal but that of lp illegal?
/*
        int i = 42;     void *p = &i;       long *lp = &i;

        because void is generic pointer type and hold any object type, lp is illegal because type mismatch
 */