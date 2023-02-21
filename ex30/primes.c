/**
 * @file primes.c
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
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int *p; 
    int i;
    for (i = 0; i < 25; i++)
    {
        printf("%d ", primes[i]);
    }
    printf("\n");
    p = primes;
    for (i = 0; i < 25; i++)
    {
        printf("%d ", *p);
        p++;
    }
    /**
     * @brief use pointer c to replace pointer p to display the array instead 
     * 
     */
    int *c = primes;
    printf("\n");
    for (i = 0; i < 25; i++)
    {
        printf("%d ", c[i]);
        //c++
    }
    printf("\n");
    return 0;
    int **int_primes = (int **)malloc(25 * sizeof(int *));
    for (i = 0; i < 25; i++)
    {
        int_primes[i] = (int *)malloc(sizeof(int));
        int_primes[i] = &primes[i];
    }
    for (i = 0; i < 25; i++)
    {
        printf("%d ", *int_primes[i]);
    }
    printf("\n");
    for (i = 0; i < 25; i++)
    {
        printf("%d ", int_primes[i]);
    }
    int **p_prime = int_primes;
    for (i = 0; i < 25; i++)
    {
        printf("%d ", *p_prime[i]);
        //p++;
    }
}
// Path: ex30\primes.c

