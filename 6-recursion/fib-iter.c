#include <stdio.h>
/**
 * file: fib-iter.c
 *
 * Iteratively computing the first n Fibonacci numbers without using an array.
 *
 * Created by hengxin on 11/13/21.
*/

int main() {
  int n;
  scanf("%d", &n);

  long long fib0 = 0;
  long long fib1 = 1;

  long long fib2 = 0;
  for (int i = 2; i <= n; i++) {
    fib2 = fib0 + fib1;

    fib0 = fib1;
    fib1 = fib2;
  }

  printf("%lld\n", fib2);

  return 0;
}