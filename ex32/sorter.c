/**
 * @file sorter.c
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
#include <ctype.h> 
#include <limits.h> 
#include <errno.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

#define SIZE 5
#define MAX 20

int main(int argc, char **argv); // main function prototype

int main(int argc, char **argv)
{
    char inputs[SIZE][MAX];
    char isort[SIZE][MAX];
    char *temp; 
    int x, a, b; 
    for (x = 0; x < SIZE; x++)
    {
        printf("Enter a word: ");
        fgets(inputs[x], MAX, stdin);
        strcpy(isort[x], inputs[x]);
    }
    for (a = 0; a < SIZE; a++)
    {
        for (b = a + 1; b < SIZE; b++)
        {
            if (strcmp(isort[a], isort[b]) > 0)
            {
                temp = isort[a];
                isort[a] = isort[b];
                isort[b] = temp;
            }
        }
    }
    printf("Sorted list of words:"); 
    for (x = 0; x < SIZE; x++)
    {
        printf("%s", isort[x]);
    }
    return 0;
}

