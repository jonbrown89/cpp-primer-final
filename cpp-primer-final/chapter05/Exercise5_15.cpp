//Exercise 5.15: Explain each of the following loops. Correct any problems you detect.
/*
            (a) for (int ix = 0; ix != sz; ++ix) { ... }
                if (ix != sz)
                    // ...

            (b) int ix;
                for (ix != sz; ++ix) { ... }

            (c) for (int ix = 0; ix != sz; ++ix, ++ sz) { ... }



            (a)  int ix, sz;                                // init ix to keep in scope
                for ( ix = 0; ix != sz; ++ix) { ... }
                if ( ix != sz)
                    // ...

            (b) int ix;
                for (; ix != sz; ++ix) { ... }          // ; for null statement init


            (c) for (int ix = 0; ix != sz; ++ix ) { ... }    // remove ++sz so loop will end

*/