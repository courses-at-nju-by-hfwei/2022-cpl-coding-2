/**
 * file: echo.c
 *
 * Echo program (command-line) arguments.
 *
 * Created by hengxin on 12/01/22.
 */

#include <stdio.h>

/**
 * @brief program/command-line arguments
 * @param argc count the number of arguments
 * @param argv v: vector
 *  argv[0]: program name
 *  argv[1 .. argc - 1]: ant hengxin
 *  argv[argc]: NULL
 * @return
 *
 * // echo ant hengxin
 */
int main(int argc, char *argv[]) {
  // for (int i = 1; i < argc; i++) {
  //   printf("%s\n", argv[i]);
  // }

  // for (char **ptr = argv + 1; *ptr != NULL; ptr++) {
  //   printf("%s\n", *ptr);
  // }

  char **ptr = argv;
  // ptr = ptr + 1; *ptr;
  // *++ptr vs. *ptr++
  // *--ptr vs. *ptr--
  while (*++ptr != NULL) {
    printf("%s\n", *ptr);
  }

  return 0;
}