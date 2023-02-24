/**
 * @file snow.c
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

int main(int argc, char **argv); // main function prototype

int main(int argc, char **argv) 
{
    char **seven_dwarves = malloc(7 * sizeof(char *));
    for (int i = 0; i < 7; i++)
    {
        seven_dwarves[i] = malloc(10 * sizeof(char));
    }
    strcpy(seven_dwarves[0], "Doc");
    strcpy(seven_dwarves[1], "Dopey");
    strcpy(seven_dwarves[2], "Bashful");
    strcpy(seven_dwarves[3], "Grumpy");
    strcpy(seven_dwarves[4], "Sneezy");
    strcpy(seven_dwarves[5], "Happy");
    strcpy(seven_dwarves[6], "Sleepy");
    
    printf("Seven dwarves: \n");
    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", seven_dwarves[i]);
    }
    char *snow_white = malloc(100 * sizeof(char));
    strcpy(snow_white, "Snow White and the Seven Dwarves");
    printf("Snow White: %s\n\n", snow_white);
    char *p = strtok(snow_white, " ");
    while (p != NULL)
    {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }
    for (int i = 0; i < 7; i++)
    {
        free(seven_dwarves[i]);
    }
    printf("Seven dwarves: \n");
    for (int i = 0; i < 7; i++) 
    {
        for (int j = 0; j < 10; j++)
        {
            seven_dwarves[i][j] = '\0';
            printf("%c", *(seven_dwarves[i] + j));
        }
        printf("\n");
        for (int j = 0; j < 10; j++)
        {
            seven_dwarves[i][j] = '\0';
        }
        free(seven_dwarves[i]);
        seven_dwarves[i] = NULL;
        printf("\n");
        for (int j = 0; j < 10; j++)
        {
            seven_dwarves[i][j] = '\0';
        }
        free(seven_dwarves[i]);
        seven_dwarves[i] = NULL;
    }
    free(seven_dwarves);
    free(snow_white);
    return 0;
}