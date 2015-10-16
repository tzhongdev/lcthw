#include <stdio.h>
#include <stdlib.h>

// fibo recursion

int fibo(int n) {

  if (n == 0)
  {
    return 0;
  }

  if (n == 1)
  {
    return 1;
  }
    return fibo(n - 1) + fibo(n - 2);
}

int main () {

  int n = 6;
  printf("Fibo num of %d is %d\n", n, fibo(n));

  return 0;
}
