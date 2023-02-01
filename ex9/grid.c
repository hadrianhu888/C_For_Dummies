/**
 * @file grid.c
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
    int i;
    char j; 
    for (i = 0; i < 10; i++) {
        for (j = 'A'; j <= 'Z'; j++) {
            printf("%d%c\t",i,j);
        }
        printf("\n");
    }
    return 0;
}

