// Created by hfwei on 2022/10/6.
//

#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;

  scanf("%d%d", &a, &b);
  int min = 0;

  // code style
  // {}
  // ?:
  if (a >= b) {
    min = b;
  } else {
    min = a;
  }

  min = a >= b ? b : a;

  printf("min{%d, %d} = %d\n", a, b, min);

  return 0;
}