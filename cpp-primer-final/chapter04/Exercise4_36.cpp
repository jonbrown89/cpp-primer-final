//Exercise 4.36: Assuming i is an int and d is a double write the expression i *= d so that it does integral, rather than
// floating-point, multiplication

#define CURRENT_EXERCISE // Uncomment out when working on this
//#define INACTIVE_EXERCISE // Comment out when working on this

#ifndef INACTIVE_EXERCISE
int main()
{
    int i = 0;
    double d = 0;
    i *= static_cast<int>(d);
    return 0;
}

#endif