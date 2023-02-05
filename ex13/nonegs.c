/**
 * @file nonegs.c
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

int main (int argc, char ** argv); // function prototype

int main (int argc, char ** argv) {
    short unsigned int a, b, u; 
    short signed int s; 
    a = 150;
    b = 200;
    u = a + b;
    s = a * b;
    printf("Unsigned variables:a = %d, b = %d, u = %d\nSigned variables: s = %d\n\n", a, b, u, s);
    return 0;
}

// Path: ex13/nonegs.c


