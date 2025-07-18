﻿//Exercise 1.15: Write programs that contain the common errors discussed in the box on page 16.
// Familiarize yourself with the message the compiler generates.
/*


    Syntax errors: The programmer has made a grammatical error in the C++ language.
    
    error: missing ) in parameter list for main
    int main ( {
    // error: used colon not a semicolon, after endl
    std::cout << "Read each file." << std::endl:
    // error: missing quotes around string literal
    std::cout << Update master. << std::endl;
    // error: second output operator is missing
    std::cout << "Write new master." std::endl;
    // error: missing ; on return statement
    return 0
    }

    
    Type errors: Each item of data in C++ has an associated type. the value 10, for example, has a type of int
    (or, more colloquially, "is an int"). The word "hello", including the double quoatation marks, is a string literal.
    One example of a type error is passing a string literal to a function that expects an int argument.
    
    Declaration errors: Every name used in a C++ program must be declared before it is used. Failure to declare a
    name usually results in an error message. The two most common declaration errors are forgetting to use std:: for a
    name from the library and misspelling of an identifier:

    #include <iostream>
    int main()
    {
            int v1 = 0, v2 = 0;
            std::cin >> v >> v2; // error: uses "v" not "v1"

            // error: cout not defined; should be std::cout
            cout << v1 + v2 << std::endl;
            return 0;
    }
 */