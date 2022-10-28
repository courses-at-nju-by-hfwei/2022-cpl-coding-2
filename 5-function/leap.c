// Created by hfwei on 2022/10/6.
//

#include <stdio.h>
#include <stdbool.h>

bool IsLeapYear(int year);

int main() {
  // year: in the main function: local variable
  // scope (life time)
  int year = 0;
  scanf("%d", &year);

  // year: actual argument (实参)
  bool leap = IsLeapYear(year);

  if (! leap) {
    printf("The year %d is a common year.\n", year);
  } else {
    printf("The year %d is a leap year.\n", year);
  }

  return 0;
}

// year: formal parameter (形式参数)
// scope as a local variable
// In C, pass by value (传值)
// year = 2000
bool IsLeapYear(int year) {
  return ((year % 4 == 0 && year % 100 != 0) ||
      (year % 400 == 0));
}