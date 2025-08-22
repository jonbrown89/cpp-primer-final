//Exercise 4.3: Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities
// for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the
// use of the language by the programmer. Do you consider that an acceptable trade-off? Why or why not?

// Yes, I feel there is a net positive trade off here for performance. The negative aspects of this trade off can be reduced
// by a programmer who is highly disciplined about avoiding side effects in expressions. However, over time this positive gets
// smaller as compilers get more sophisticated and the hardware becomes more performant. Unpredictable behavior requires a
// noticeable performance gain for the problems it creates when debugging.