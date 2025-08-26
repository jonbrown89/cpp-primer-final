//Exercise 5.4: Explain each of the following examples, and correct any problems you detect:
/*
                (a) while (string::iterator iter != s.end()) { ... }
                (b) while (bool status = find(word)) { ... }
                    if (!status) { ... }


                (a) need to init iter variable before using it in the loop
                (b) !status will be out of scope in the if from the while loop, needs to be defined prior to while loop.

*/