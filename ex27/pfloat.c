/**
 * @file pfloat.c
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

int main(int argc, char **argv); // Function prototype

int main(int argc, char **argv)
{
    float x; 
    float *x_ptr; 
    printf("Enter a floating point number: ");
    scanf("%f", &x);
    x_ptr = &x;
    printf("You entered %f", x);
    printf("\n");    
    printf("Enter a floating point number: ");
    scanf("%f", &x);
    printf("You entered %f", *x_ptr);
    printf("\n");
    return 0;
}

