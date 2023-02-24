/**
 * @file abcde.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <complex.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <math.h>

int main(int argc, char **argv); // main function prototype

int main(int argc, char **argv)
{
    int a, b, c, d, e;
    int x; 
    int *variables[5];
    a = 1;
    b = a *2;
    c = b * 2;
    d = c * 2;
    e = d * 2;
    variables[0] = &a;
    variables[1] = &b;
    variables[2] = &c;
    variables[3] = &d;
    variables[4] = &e;
    for (x = 0; x < 5; x++)
    {
        printf("%d\n", variables[x]);
    }
    return 0;
}