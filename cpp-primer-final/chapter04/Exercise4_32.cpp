//Exercise 4.32: Explain the following loop.
/*
    constexpr int size = 5;
    int ia[size] = {1,2,3,4,5};
    for (int *ptr = ia, ix = 0;
        ix != size && ptr != ia+size;
        ++ix, ++ptr     {/* ... /*}



moves the pointer to go through each element, checking against one past last element in the array. Repeats the block
for each element in the array.


*/