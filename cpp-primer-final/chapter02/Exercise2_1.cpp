//Exercise 2.1: What are the differences between int, long, long long, and short? Between an unsigned and signed type?
// Between a float and a double?
/*
int = integer = min size 16 bits
long = long integer = min size 32 bits
long long = long integer = min size 64 bits
short = short integer = min size 16 bits

Signed vs Unsigned

Signed types (default): Can represent both positive and negative numbers. They use one bit for the sign, so a 32-bit
signed int ranges from about -2.1 billion to +2.1 billion.

Unsigned types: Can only represent non-negative numbers (0 and positive). Since they don't need a sign bit, they can
represent larger positive values. An unsigned 32-bit int ranges from 0 to about 4.3 billion.


Floating-Point Types

float: Single precision, typically 32 bits (4 bytes). Provides about 6-7 decimal digits of precision. Sufficient for
most basic calculations but can accumulate rounding errors quickly.

double: Double precision, typically 64 bits (8 bytes). Provides about 15-17 decimal digits of precision. More accurate
for scientific calculations and the default choice for most floating-point work.

 */