//Exercise 3.20: Identify the indexing errors in the following code.
/*
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 1; ix <= array_size; ++ix)
        ia[ix] = ix;

Off-by one error in array access, the loop condition ix <= array_size causes the loop to access ia[10] which is out of bounds.

Correction: Start from index 0
    for (size_t ix = 0; ix < array_size; ++ix)
*/