//Exercise 5.7: Correct the errors in each of the following code fragments:
/*
        (a) if (ival != ival2)
                ival1 = ival2
            else ival1 = ival2 = 0;
        (b) if (ival < minval)
                minval = ival;
                occurs = 1;
        (c) if (int ival = get_value())
                cout << "ival = " << ival << endl;
            if (!ival)
                cout << "ival = 0\n";
        (d) if (ival = 0)
                ival = get_value();


        
        (a) if (ival != ival2)
                ival1 = ival2;  // add semicolon
            else ival1 = ival2 = 0;
            
        (b) if (ival < minval)
            {                   // add {}
                minval = ival;
                occurs = 1;
            }
            
        (c) int ival;       // put ival here to keep in scope
            if ( ival = get_value())
                cout << "ival = " << ival << endl;
            if (!ival)
                cout << "ival = 0\n";
                
        (d) if (ival == 0)  // change = to == equailty operator
                ival = get_value();

*/