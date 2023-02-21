/**
 * @file string.c
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
    char text[] = "Going! Going! Gone!";
    char *p;
    p = text;
    puts(p);
    puts(p);
    while (*p != '\0')
    {
        puts(p);
        p++;
    }
    return 0;
}
