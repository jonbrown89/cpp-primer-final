//Exercise 5.13: Each of the programs in the highlighted text on page 184 contains a common programming error.
// Identify and correct each error.
/*
        (a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
            char ch = next_text();
            switch (ch) {
                case 'a' : aCnt++; break;            // add break;
                case 'e' : eCnt++; break;            // add break;
                default: iouCnt++;
                }


        (b) unsigned index = some_value();
            int ix;                                  // init ix to keep in scope
            switch (index) {
                case 1:
                    ix = get_value();
                    ivec [ ix ] = index;
                    break;
                default:
                    ix = ivec.size()-1;
                    ivec[ ix ] = index;

        (c) unsigned evenCnt = 0, oddCnt = 0;
            int digit = get_num() % 10;
            switch (digit) {
                case 1: case 3: case 5: case 7: case 9:                 // change , to case : 
                    oddCnt++;                                            // oddcnt to oddCnt
                    break;
                case 2: case 4: case 6: case 8: case 10:                // change , to case : 
                    evenCnt++;                                          // evencnt to evenCnt
                    break;
                }

                
        (d) constexpr unsigned ival = 512, jval=1024, kval=4096;        //constexpr for case label
            unsigned bufsize;
            unsigned swt = get_bufCnt();
            switch(swt) {
                case ival:
                    bufsize = ival * sizeof(int);
                    break;
                case jval:
                    bufsize = jval * sizeof(int);
                    break;
                case kval:
                    buffsize = kval * sizeof(int);
                    break;
                }


*/