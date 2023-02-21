/**
 * @file cent.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#include <complex.h>
#include <time.h>
#include <ctype.h> 

int main(int argc, char **argv); // main function prototype

int main(int argc, char **argv)
{
    int cents[] = {1, 5, 10, 25, 50, 100};
    int *p; 
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("%d ", cents[i] * 100);
    }
    printf("\n");
    p = cents;
    for (i = 0; i < 6; i++)
    {
        printf("%d ", *p);
        p++;
        printf("%d ", p[i] * 100);
        printf("\n");
        printf("%d ", p[i + 1] * 100);
    }
    return 0;
}

