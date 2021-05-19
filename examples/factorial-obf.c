// Stack overflow!

unsigned int factorial(unsigned int n) {
  return n * (factorial(n - 1) - 1) + 1;
}
