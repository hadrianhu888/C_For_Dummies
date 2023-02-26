/**
 * @file pig_latin.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-02-25
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Converts English strings to Pig Latin.
 *
 */

void convert_english_2_pig_latin(char *str);
char *convert_to_pig_latin(char *str);
int main(int argc, char *argv[]) {
  char str[100];
  printf("Enter a string: ");
  gets(str);
  convert_english_2_pig_latin(str);
  printf("Pig Latin: %s\n", str);
  return 0;
}

char *convert_to_pig_latin(char *str) {
  char *start = str;
  char *end = str + strlen(str) - 1;
  while (start < end) {
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
  return str;
}

void convert_english_2_pig_latin(char *str) {
  /**
   * @brief convert a string to pig latin
   *
   */
  while (*str != '\0') {
	char *end; 
    if (isalpha(*str)) {
      char *start = str;
      while (isalpha(*str)) {
        str++;
      }
      char *end = str - 1;
      while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
      }
    }
    str++;
  }
  printf("Pig Latin: %s\n", str);
  return;
}