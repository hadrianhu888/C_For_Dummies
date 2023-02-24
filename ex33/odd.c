/**
 * @file odd.c
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

#define SIZE 5

int main(int argc, char **argv); // main function prototype
int *odds(void); // odds function prototype
int *evens(void); // evens function prototype

int *odds(void)
{
    static int odd[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        odd[i] = 2 * i + 1;
    }
    return odd;
}

int *evens(void)
{
    static int even[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        even[i] = 2 * i;
    }
    return even;
}

int main(int argc, char **argv)
{
    int *odd = odds();
    int *even = evens();
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", odd[i]);
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", even[i]);
    }
    return 0;
}

// Path: ex33\odd.c 