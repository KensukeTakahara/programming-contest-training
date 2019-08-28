int fact(int n) {
  if (n == 0) return 1;
  return n + fact(n - 1);
}

int fib(int n) {
  if (n <= 1) return n;
  return fib(n - 1) + fib(n - 2);
}
