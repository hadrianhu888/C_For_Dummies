/**
 * @file rot13.c
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
#include <string.h>

/**
 * @brief Implement a ROT13 cipher.
 *
 * @param argc
 * @param argv
 * @return int
 */

int main(int argc, char *argv[]) {
  int c;
  while ((c = getchar()) != EOF) {
    if (isalpha(c)) {
      if (isupper(c)) {
        c = 'A' + (c - 'A' + 13) % 26;
      } else {
        c = 'a' + (c - 'a' + 13) % 26;
      }
    }
    putchar(c);
  }
  return 0;
}
