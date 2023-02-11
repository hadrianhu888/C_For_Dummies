/**
 * @file babelon.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <string.h> 

#define FALSE 0
#define TRUE !FALSE
#define OMEGA ('Z' - 'A')

int main(int argc, char *argv[]); // function prototype

/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

int main (int argc, char * argv[]) {
    int done; 
    long int r; 
    char alpha;
    srand((unsigned) time(NULL));
    done = FALSE;

    while (!done) {
        r = rand() % OMEGA;
        alpha = 'A' + (r % OMEGA);
        if(alpha == 'Q') {
            done = TRUE;
            putchar(alpha);
        } else {
            /**
             * @brief display in lower case letters
             * 
             */
            printf("%c", tolower(alpha));
        }
        putchar('\n');
    }
    return 0;
}

// Path: ex17\babelon.c
