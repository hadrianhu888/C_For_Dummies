/**
 * @file names.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char ** argv);  // function prototype

int main (int argc, char ** argv) {
    char a, b, c, d;
    for (a = 'A'; a <= 'Z'; a++) {
        for (b = 'A'; b <= 'Z'; b++) {
            for (c = 'A'; c <= 'Z'; c++) {
                for (d = 'A'; d <= 'Z'; d++) {
                    printf("%c%c%c%c\t",a,b,c,d);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

// Path: ex9\names.c 

