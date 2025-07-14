//Exercise 1.14: Compare and contrast the loops that used a for with those using a while.
// Are there advantages or disadvantages to using either form?
/*
When to Use Each
Use FOR loops when:

You know the number of iterations in advance
You're counting/iterating through a range
You have a clear start, condition, and increment pattern
Working with arrays or containers with known size

Use WHILE loops when:

The number of iterations is unknown
The loop depends on user input or external conditions
You need more complex loop control logic
The termination condition is more complex than a simple counter

Performance
Both compile to essentially the same machine code, so performance is typically identical.
Common Pitfalls
For loops:

Easy to mix up initialization, condition, and increment
Can be harder to break out of complex nested structures

While loops:

Easy to forget the increment (infinite loops)
Loop variable scope extends beyond the loop
More verbose for simple counting

Bottom line: Use for loops for counting and known iterations, while loops for more complex or indefinite conditions.
Both are powerful tools - choose based on readability and the nature of your problem.
 */