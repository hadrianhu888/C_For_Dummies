/**
 * @file yorn.c
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

int main (int argc, char ** argv)
{
    char ch; 
    printf("Would you like me to send youur password to the bad guys? (y/n) ");
    printf("\nEnter Y or N: ");
    ch = getchar();
    if (ch == 'y' || ch == 'Y') {
        printf("Your password is: 123456\n\n");
    } else if (ch == 'n' || ch == 'N') {
        printf("Your password is: 654321\n\n");
    } else {
        printf("You did not enter Y or N.  I will assume you said no.\n");
        printf("Your password is: 654321\n\n");
    }
    return 0;
}

// Path: ex12\yorn.c


