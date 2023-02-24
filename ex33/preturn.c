/**
 * @file preturn.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <complex.h>
#include <assert.h>
#include <ctype.h>

int *greatest(int a, int b, int c); // greatest function prototype
int *smallest(int a, int b, int c); // greatest function prototype
int main(int argc, char **argv); // main function prototype

int *greatest(int a, int b, int c)
{
    int *greatest = NULL;
    if (a > b && a > c)
    {
        greatest = &a;
    }
    else if (b > a && b > c)
    {
        greatest = &b;
    }
    else if (c > a && c > b)
    {
        greatest = &c;
    }
    return greatest;
}

int *smallest(int a, int b, int c)
{
    int *smallest = NULL;
    if (a < b && a < c)
    {
        smallest = &a;
    }
    else if (b < a && b < c)
    {
        smallest = &b;
    }
    else if (c < a && c < b)
    {
        smallest = &c;
    }
    return smallest;
}

int main(int argc, char **argv)
{
    int a, b, c;
    int *biggest = NULL;
    int *tiniest = NULL;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    biggest = greatest(a, b, c);
    tiniest = smallest(a, b, c);
    printf("The greatest number is %d\n", *biggest);
    printf("The smallest number is %d\n", *tiniest);
    return 0;
}


