// Swap two variables without using a third
// Avoids using the XOR trick, but watch out for overflow!
a = a + b
b = a - b
a = a - b