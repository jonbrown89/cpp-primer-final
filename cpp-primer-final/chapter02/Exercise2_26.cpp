//Exercise 2.26: Which of the following are legal? For those that are illegal, explain why.
/*
                (a) const int buf;
                (b) int cnt = 0;
                (c) const int sz = cnt;
                (d) ++cnt; ++sz;

                (a) illegal: const variables must be initialized when declared because their value cannot be changed
                             after declaration.
                (b) legal
                (c) legal
                (d) ++cnt is legal but ++sz is illegal because sz is const so cant be modified after initialization
 */