/**
 * @file avalue.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char ** argv); // function prototype

int main(int argc, char **argv) {
    char a = 'a';
    char A = 'A';
    char z = 'z';
    char Z = 'Z';
    char zero = '0';
    char nine = '9';
    char space = ' ';
    char tab = '\t';
    char newline = '\n';
    char backslash = '\\';
    char single_quote = '\'';
    char double_quote = '\"';
    char question_mark = '\?';
    char exclamation_mark = '\\!';
    char at_sign = '\\@';
    char hash = '\\#';
    char dollar_sign = '\\$';

    char alpha = 'A';
    printf("\nCharacter %c has value %d", alpha, alpha);
    alpha = alpha + 1;
    printf("\nCharacter %c has value %d", alpha, alpha);
    alpha = alpha + 1;
    printf("\nCharacter %c has value %d", alpha, alpha);
    return 0;
}
