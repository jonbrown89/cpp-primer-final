//Exercise 3.37: What does the following program do?
/*
        const char ca[] = {'h', 'e', 'l', 'l', 'o'};
        const char *cp = ca;
        while (*cp){
            cout << *cp << endl;
            ++cp;
            }


            step by step
            1. Declaration: const char ca[] = {'h', 'e', 'l', 'l', 'o'}
                creates a constant character array containing the letters 'h', 'e', 'l', 'l', 'o'
            2. Pointer initialization: const char *cp = ca;
                creates a pointer cp that points to the first element of the array
            3. Loop condition: while (*cp)
                continues as long as the character pointed to by cp is not the null character
            4. Loop body: cout << *cp << endl;  //prints the current character followed by a newline
                ++cp;   //advances the pointer to the next character in the array

            *critical issue: the character array ca is not null-terminated. so the loop will continue with
            *undefined behaviour // const char ca[] = {'h', 'e', 'l', 'l', 'o', '\0'};
 */