//Exercise 3.3: Explain how whitespace characters are handled in the string input operator and in the getline function.

/*
string input operator >>
        extraction operator treats whitespace as delimiters and built-in whitespace handling:
        - skips leading whitespace; automatically ignores spaces, tabs, newlines at the beginning
        - stops at first whitespace; reading terminates when it encounters any whitespace character
        - leaves trailing whitespace; in the input buffer for the next operation

getline() function
        treats whitespace as regular characters and reads until a delimiter:
        - Preserves all whitespace; spaces, tabs are included in the result
        - Reads entire lines; continues until it finds the delimiter (default: newline)
        - Consumes the delimiter - removes it from input buffer but doesn't include it in the string

*/