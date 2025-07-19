//Exercise 2.30: For each of the following declarations indicate whether the object being declared has top-level
//               or low-level const.
/*
            const int v2 = 0;   int v1 = v2;
            int *p1 = &v1, &r1 = v1;
            const int *p2 = &v2, *const p3 = &i, *r2 = v2;

            top-level const indicates that the object itself is const
            low-level const indicates that the object points to or refers to something const
            
            v2 is top-level const, v1 no const, p1 no const, r1 no const, p2 low-level const, p3 is both top-level and
            low-level const. r2 low-level const.
 */