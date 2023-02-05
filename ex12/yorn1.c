/**
 * @file yorn1.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main (int argc, char ** argv); // function prototype

int main (int argc, char ** argv) {
    char ch; 
    for (;;) {
        printf("Would you like me to send youur password to the bad guys? (y/n) ");
        printf("\nEnter Y or N: ");
        ch = getchar();
        if (ch == 'Y') {
            printf("Well then, your password is safe!\n\n"); 
        } else if (ch == 'y') {
            printf("Well then, your password is safe!\n\n");
        } else if (ch == 'N') {
            printf("Well then, your password is unsafe!\n\n");
        } else if (ch == 'n') {
            printf("Well then, your password is unsafe!\n");
        } else {
        printf("You did not enter Y or N.  I will assume you said no.\n");
        printf("Your password is: 654321\n\n");
        fflush(stdin);
        }
    }
    return 0;
}