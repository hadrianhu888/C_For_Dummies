/**
 * @file leftr.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <math.h>

int main(int argc, char **argv); // Function prototype

int main(int argc, char **argv)
{
    int v;
    int r;
    int x; 
    printf("Enter an integer value: ");
    scanf("%d", &v);
    for (x = 1; x < 8; x++)
    {
        r = v >> x;
        printf("The value of r is %d", r);
        printf("\n");
    }
    return 0;
}
