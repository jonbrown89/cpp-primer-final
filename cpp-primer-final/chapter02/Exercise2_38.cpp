//Exercise 2.38: Describe the differences in type deduction between decltype and auto. Give an example of an expression
// where auto and decltype will deduce the same type and an example where they will deduce differing types.
/*
        auto: deduces types like template argument deduction - strips references, const, and volatile qualifiers by default

        decltype: Preserves the exact type of an expression, including references, const, and qualifiers
 */