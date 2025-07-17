//Exercise 2.11: Explain whether each of the following is a declaration or a definition.
/*
                (a) extern int ix = 1024;
                (b) int iy;
                (c) extern int iz;


                (a) definition: when you initialize a variable with extern it overrides the usual "declaration-only"
                                behavior of extern and defines the variable, allocating storage for it.

                (b) definition: declares the variable iy and also defines it by allocating storage, creates a variable
                                initial value 0

                (c) declaration: declares that iz exists somewhere else but doesn't allocate storage for it. It's a pure
                                 declaration that tells the compiler about the variable's type and name, but the actual definition
                                 (storage allocation) must occur elsewhere.


                declaration: introduces a name and its type
                definition: declaration + storage allocation
 */