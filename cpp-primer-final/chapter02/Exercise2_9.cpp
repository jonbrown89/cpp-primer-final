//Exercise 2.9: Explain the following definitions. For those that are illegal, explain what's wrong and how to correct it.
/*
                (a) std::cin >> int input_value;
                (b) int i = { 3.14 };
                (c) double salary = wage = 999.99;
                (d) int i = 3.14;



                (a) illegal, declaring a variable and read into the same statement
                (a) correct: int input_value;
                             std::cin >> input_value;
                (b) illegal
                (b) brace initialization doesn't allow narrowing conversions, converting 3.14 to int would lose fractional part
                (b) correct: int i = 3.14; or int i = { 3 };

                (c) illegal - wage is not declared, cannot use undeclared variable in assignment chain
                (c) correct: double wage, salary = wage = 999.99; //declare both first
                (c) or: double wage = 999.99;
                        double salary = wage;

                (d) legal but loses fractional part
                (d) correct: double i = 3.14;
 */