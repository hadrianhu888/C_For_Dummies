/**
 * @file modline.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define linelen 100

void dashes(char c); 
int main(int argc, char **argv); 

void dashes(char c)
{
    int x; 
    if (c == '-')
    {
        putchar(c);
        return; 
    }
    putchar('\n');
    for (x = 0; x < linelen; x++)
    {
        putchar(c); 
    }
    putchar('\n');
}

int main(int argc, char **argv) 
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    dashes(c);
    return 0;
}