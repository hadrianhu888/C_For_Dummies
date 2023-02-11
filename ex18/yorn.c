/**
 * @file yorn.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define FALSE 0
#define TRUE !FALSE 

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    int done; 
    char ch; 
    done = FALSE; 
    printf("Would you like me to send your password to the bad guys?\n");
    printf("Enter Y or N: ");
    scanf("%c", &ch);
    while (!done) {
        switch(ch) {
            case 'Y':
                puts("Your password has been sent to the bad guys.");
                done = TRUE;
                break;
            case 'N':
                puts("Your password has not been sent to the bad guys.");
                done = TRUE;
                break;
            default:
                puts("Invalid input. Please enter Y or N.");
                printf("Enter Y or N: ");
                scanf("%c", &ch);
                break;
        }
    }
    return 0;
}