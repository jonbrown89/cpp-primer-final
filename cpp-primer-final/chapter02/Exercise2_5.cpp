//Exercise 2.5: Determine the type of each of the following literals. Explain the differences among the literals in
// each of the four examples.
//                  (a) 'a', L'a', "a", L"a"
//                  (b)  10, 10u, 10L, 10uL, 012, 0xC
//                  (c)  3.14, 3.14f, 3.14L
//                  (d)  10, 10u, 10., 10e-2
/*
(a)  'a' // character literal
(a)  L'a' // wide character literal, type is wchar_t
(a)  "a" // string literal
(a)  L"a" // wide string literal, type is wchar_t

(b)  10 // int
(b)  10u // unsigned int
(b)  10L // long integer, type is long signed
(b)  10uL // unsigned long, type is unsigned long
(b)  012 // Octal integer literal, type int
(b)  0xC // Hexadecimal integer literal, type int

(c)  3.14 // double, floating-point literal type
(c)  3.14f // single-precision float, type is float
(c)  3.14L // long double, type is long double highest precision floating-point type

(d)  10 // int
(d)  10u // unsigned int
(d)  10. // double
(d)  10e-2 // double
 */