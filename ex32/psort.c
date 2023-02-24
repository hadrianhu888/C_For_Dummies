/**
 * @file psort.c
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
    char **names = malloc(5 * sizeof(char *));
    for (int i = 0; i < 5; i++)
    {
        names[i] = malloc(6 * sizeof(char));
    }
    strcpy(names[0], "John");
    strcpy(names[1], "Mary");
    strcpy(names[2], "Bob");
    strcpy(names[3], "Jane");
    strcpy(names[4], "Alice");
    
    char **sorted_names = malloc(5 * sizeof(char *));
    for (int i = 0; i < 5; i++)
    {
        sorted_names[i] = malloc(6 * sizeof(char));
    }
    /**
     * @brief print the names
     * 
     */
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]);
    }
    printf("\n");
    char *temp;
    int x, a, b;
    for (x = 0; x < 5; x++)
    {
        for (a = 0; a < 5; a++)
        {
            for (b = 0; b < 5; b++)
            {
                if (strcmp(names[a], names[b]) > 0)
                {
                    temp = names[a];
                    names[a] = names[b];
                    names[b] = temp;
                }
            }
        }
    }
    for (x = 0; x < 5; x++)
    {
        printf("%s\n", names[x]);
    }
    return 0;
}