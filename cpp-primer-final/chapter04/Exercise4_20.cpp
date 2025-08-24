//Exercise 4.20: Assuming that iter is a vector<string>::iterator, indicate which, if any, of the following expressions
// are legal. Explain the behavior of the legal expressions and why those that aren't legal are in error.
/*
    (a) *iter++;            (b) (*iter)++;       (c) *iter.empty()
    (d) iter->empty()       (e) ++*iter;         (f) iter++->empty();

    (a) return *iter then ++iter
    (b) illegal *iter is a string cannot increment the value
    (c) illegal iter should use -> to indicate if empty
    (d) check if iter value is empty
    (e) illegal string cannot increment
    (f) return iter->empty() then ++iter


*/