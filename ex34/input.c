/**
 * @file input.c
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

int main(int argc, char **argv); // main function prototype

int main (int argc, char **argv)
{
    char *string = malloc(100);
    int size; 
    char *input;
    printf("Enter a string: ");
    fgets(string, 100, stdin);
    input = malloc(strlen(string) + 1);
    if (input == NULL)
    {
        fprintf(stderr, "malloc failed\n");
        exit(1);
    }
    else if (input != NULL)
    {
        strcpy(input, string);
        printf("%s\n", input);
    }
    /**
     * @brief resize input buffer to save memory
     * 
     */
    size = strlen(input);
    input = realloc(input, size + 1);
    if (input == NULL)
    {
        fprintf(stderr, "realloc failed\n");
        exit(1);
    }
    else if (input != NULL)
    {
        printf("%s\n", input);
    }
    free(input);
    free(string);
    return 0;
}