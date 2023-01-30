/**
 * @file typechar.c
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

int main (int argc, char ** argv) {
    char t; 
    printf("Enter a character: ");
    t = getchar();
    printf("You entered: %c\n", t);
    printf("Thank you for typing a character, please enter another:");
    t = getchar();
    printf("You entered: %c\n", t);
    printf("Thank you for typing a character, please enter another:");
    t = getchar();
    printf("You entered: %c\n", t);
    printf("Thank you for typing a character, please enter another:");
    t = getchar();
    printf("You entered: %c\n", t);
    return 0;
}

// Path: ex7\typechar.c
// Compare this snippet from ex7\alpha.c:
// /**
/** 
 * @brief 
 * 
 */