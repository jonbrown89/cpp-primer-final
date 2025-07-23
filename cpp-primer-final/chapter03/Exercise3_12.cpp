//Exercise 3.12: Which, if any, of the following vector definitions are in error? For those that are legal, explain
//what the definition does. For those that are not legal, explain why they are legal.
/*

        (a) vector<vector<int>> ivec;
        (b) vector<string> svec = ivec;
        (c) vector<string> svec(10, "null");


        (a) legal: creates an exmpty vector of vectors of int. a vector where each element is itself a vector<int>
        (b) illegal: type mismatch, ivec = vector<vector<int>>
        (c) legal: creates a vector of 10 strings all set to "null"


*/