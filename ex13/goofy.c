/**
 * @file goofy.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define PI 3.14159265358979323846

int main (int argc, char ** argv); // function prototype

int main (int argc, char ** argv) {
    char c; 

    for (c = 0; c < 256; c++) {
        printf("%d\t%c\t%o\t%x\n\n", c, c, c, c);
    }
    return 0;
}

// Path: ex13\goofy.c

