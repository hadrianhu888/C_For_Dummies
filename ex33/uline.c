/**
 * @file uline.c
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

void underline(char *string); // underline function prototype
int main(int argc, char **argv); // main function prototype
int string_length(char *string); // string_length function prototype

int string_length(char *string)
{
    int length = 0;
    while (*string != '\0')
    {
        length++;
        string++;
    }
    return length;
}

void underline(char *string)
{
    int length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        printf("-");
    }
    printf("\n\n");
}

int main(int argc, char **argv)
{
    char *string = "Hello World!";
    printf("%s\n", string);
    underline(string);
    /**
     * @brief return string length with custom function 
     * 
     */
    printf("String length: %d\n", string_length(string));
    return 0;
}

