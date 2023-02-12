/**
 * @file yorn.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h> 

int main(int argc, char *argv[]); // function prototype

#define FALSE 0
#define TRUE !FALSE

int main(int argc, char *argv[]) {
    int done; 
    char ch; 
    done = FALSE; 
    printf("Do you want to continue? (y/n) ");
    while (!done) {
        ch = tolower(getchar());
        switch (ch) {
        case 'y':
            printf("You said yes.");
            done = TRUE;
            break;
        case 'n':
            printf("You said no.");
            done = TRUE; 
            break;
        default:
            printf("Please enter y or n: ");
            done = FALSE; 
            break;            
        }
    }
    return 0;
}
