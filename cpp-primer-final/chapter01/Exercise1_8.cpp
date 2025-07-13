//Exercise 1.8: Indicate which, if any, of the following output statements are legal:
//      std::cout << "/*" ;
//      std::cout << "*/" ;
//      std::cout << /* "*/" */;
//      std::cout << /* "*/" /* "/*" */;
// After you've predicted what will happen, test your answers by compiling a program with each of these
// statements. Correct any errors you encounter.

// Statement 1 is legal and has the output /*
// This is a simple string literal containing the characters /*

// Statement 2 is legal and has the output */
// This is a simple string literal containing the characters */

// Statement 3 is not legal, this has a comment that starts with /* but the "*/" inside is part of a
// string literal, so the comment doesn't properly close. The compiler will look for
// */ to close the comment, but it is inside quotes.
// the fix is std::cout << /* "*/" */ " << std::endl;
// and will give the following output */

// Statement 4 is legal and has the output /*
// This is a simple string literal containing the characters " /* "
