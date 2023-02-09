/**
 * @file loop.c
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

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[]) {
    int c; 
    while (c < 10) {
        printf("The value of c is %d\n\n", c);
        c++;
    }
    c= 10;
    while (c > 0) {
        printf("The value of c is %d\n\n", c);
        c--;
    }
    return 0;
}

