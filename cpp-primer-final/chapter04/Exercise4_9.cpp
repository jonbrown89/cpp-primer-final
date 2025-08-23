//Exercise 4.9: Explain the behavior of the condition in the following if:
/*
            const char *cp = "Hello World";
            if (cp && *cp)


            cp is a pointer to const char *, not a nullptr. true
            *cp is a const char H, non zero value. true
            true && true = true

*/