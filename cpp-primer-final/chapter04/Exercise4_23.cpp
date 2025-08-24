//Exercise 4.23: The following expression fails to compile due to operator precedence. Using table 4.12 (page 166),
// explain why it fails. How would you fix it?
/*
        string s = "word";
        string p1 = s + s[s.size() - 1] == 's' ? "" : "s" ;

        the ?: and + operator precedence
        string p1 = s + (s[s.size() -1] == 's' ? "" : "s");

*/