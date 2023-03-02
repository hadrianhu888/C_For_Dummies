/**
 * @file doubler.c
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
int doubler(int v); 

int main(int argc, char *argv[])
{
    int v = 0;
    int result = 0;
    printf("Enter a number: ");
    scanf("%d", &v);
    result = doubler(v);
    printf("The result is: %d\n\n", result);
    return 0;
}

int doubler(int v)
{
    if(v <1000)
    {
        return v * 2;
    }else  
    {
        return v;
    }
}

