//Exercise 3.18: Is the following program legal? If not, how might you fix it?
/*
            vector<int> ivec;
            ivec[0] = 42;

            illegal, undefined behavior because vector int ivec has nothing at 0
            fix:
                vector<int> ivec{ 42 };
            or
                vector<int> ivec;
                ivec.push_back(42);
                
            or to keep same structure:
            
                vector<int> ivec(1);
                ivec[0] = 42;
 */