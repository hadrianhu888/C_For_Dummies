/**
 * @file counter.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h> 
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
#include <windows.h>
#include <time.h>
#include <unistd.h>
#include <math.h>
#include <errno.h>
#include <limits.h>
#include <complex.h> 

int main(int argc, char **argv);
int string_count(char *s);

int main(int argc, char *argv[])
{
    char *s = "Hello, World!";
    int result = 0;
    result = string_count(s);
    printf("The result is: %d\n\n", result);
    return 0;
}

int string_count(char *s)
{
    int count = 0;
    if(*s++)
    {
        count+=string_count(s);
    }
    else 
    {
        count--; 
    }
    return count;
}

