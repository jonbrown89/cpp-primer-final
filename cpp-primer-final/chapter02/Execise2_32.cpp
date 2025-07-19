//Exercise 2.32: Is the following code legal or not? If not, how might you make it legal?
/*
        int null = 0, *p = null;

        illegal: C++ doesn't allow implicit conversion from int variables to pointers even if the value is 0
        How to make it legal:

        int null = 0, *p = &null;
 */