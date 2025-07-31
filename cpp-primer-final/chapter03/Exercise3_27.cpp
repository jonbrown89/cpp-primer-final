//Exercise 3.27: Assuming txt_size is a function that takes no arguments and returns an int value, which of the following
// definitions are illegal? Explain why.
/*

    unsigned buf_size = 1024;
    (a) int ia[buf_size];
    (b) int ia[4 * 7 - 14];
    (c) int ia[txt_size()];
    (d) char st[11] = "fundamental";



    (a) illegal - the dimension value must be a constant expression
    (b) legal
    (c) illegal - the dimension value must be a constant expression
    (d) illegal - the strings size is 12
*/