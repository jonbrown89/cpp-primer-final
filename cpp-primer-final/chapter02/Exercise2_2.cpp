//Exercise 2.2: To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain
// why you selected each type.
/*
rate = double - need the decimal precision that floating-point types provide, double gives enough precision for rate
calculations without the limitations of float.

principal = long long - avoid floating-point precision issues with monetary amounts while still allowing fractional rates

payment = long long - avoid floating-point precision issues, can store as cents and convert to dollars for display purposes
 */