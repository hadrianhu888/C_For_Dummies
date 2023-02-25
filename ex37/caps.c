/**
 * @file caps.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-02-25
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <assert.h>
#include <complex.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Converts all lower case to uppercase.
 *
 */

int main(int argc, char *argv[]) {
  int c;
  while ((c = getchar()) != EOF) {
    if (islower(c)) {
      c = toupper(c);
    }
    putchar(c);
  }
  return 0;
}
