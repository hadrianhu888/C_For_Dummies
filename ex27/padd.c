/**
 * @file padd.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int main(int argc, char **argv); /* Function prototype */

int main(int argc, char **argv) 
{
    short int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    short int *pa;
    int x;
    for (x = 0; x < sizeof(array) / sizeof(short int); x++) {
    printf("%d ", array[x]);
    }
    printf("\n");
    pa = (short int *)array;
    for (x = 0; x < sizeof(array) / sizeof(short int); x++)
    {
        printf("%d ", pa[x]);
    }
    printf("\n");
    return 0;
}