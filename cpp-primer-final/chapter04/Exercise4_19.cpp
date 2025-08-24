//Exercise 4.19: Given that ptr points to an int, that vec is a vector<int>, and that ival is an int, explain the behavior
// of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected?
/*
            (a) ptr != 0 && *ptr++          (b) ival++ && ival
            (c) vec[ival++] <= vec[ival]

            (a) check ptr is not null and then check the pointer value
            (b) check ival and then check ival+1 if they equal zero
            (c) incorrect: vec[ival] <= vec[ival+1]




*/