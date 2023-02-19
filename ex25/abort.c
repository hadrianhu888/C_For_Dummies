/**
 * @file abort.c
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
#include <ctype.h> 
#include <math.h> 

int main(int argc, char *argv[]); // Function prototype

int main(int argc, char *argv[])
{
    double answer; 
    double value; 
    printf("O! Computer, find the square root of : ");
    scanf("%lf", &value);
    if (value == 0.0 || value < 0.0) 
    {
        printf("Invalid input. Please try again. ");
        abort();
    } else {
        answer = sqrt(value);
        printf("The square root of %lf is %lf", value, answer);
    }
    return 0;
}

