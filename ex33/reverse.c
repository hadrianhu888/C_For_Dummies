/**
 * @file reverse.c
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

void reverse(char *string); // reverse function prototype
int main(int argc, char **argv); // main function prototype

void reverse(char *string)
{
    int length = strlen(string);
    char *reverse = malloc(length + 1);
    for (int i = 0; i < length; i++)
    {
        reverse[i] = string[length - i - 1];
    }
    reverse[length] = '\0';
    printf("%s\n", reverse);
    free(reverse);
}

int main(int argc, char **argv)
{
    char *string = "Hello World!";
    printf("%s\n", string);
    reverse(string);
    return 0;
}

