//Exercise 1.1: Review the documentation for your compiler and determine what file naming convention it uses.
//  Compile and run the main program from page 2.



// We will use preprocessor directives to control current and inactive exercises
// this will allow rider to see which files to ignore and which ones to run
/* to do this we will have the following in every exercise and comment out #define INACTIVE_EXERCISE when working
 * on the exercise. using ifndef INACTIVE_EXERCISE and close with #endif.
 */


//#define CURRENT_EXERCISE // Uncomment out when working on this
#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
int main()
{
    return 0;
}
#endif

/*
 *Process finished with exit code 0.
 */