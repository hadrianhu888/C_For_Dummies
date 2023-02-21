/**
 * @file stinker.c
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
    char string[] = "Is it supposed to smell that way?\n"; 
    char ch; 
    int x; 
    /**
     * @brief initialize variables 
     * 
     */
    ch = 'a'; 
    x = 0;
    /**
     * @brief print the string 
     * 
     */
    while (ch != '\0')
    {
        ch = string[x];
        printf("%c", ch);
        x++;
    }
    return 0;
}

// Path: ex31\stinker.c