/**
 * @file faves.c
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
    char letter, number;
    printf("Enter a letter: ");
    letter = getchar();
    fflush(stdin);
    printf("Enter a number: ");
    number = getchar();
    printf("You entered letter: %c\n", letter);
    printf("You entered number: %c\n", number);
    fflush(stdin);
    return 0;
}

