/**
 * @file unpaul.c
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

#define CENT_PER_INCH 2.54

int main(int argc, char *argv[]); 

int main(int argc, char *argv[])
{
    double inches; 
    double centimeters; 
    printf("Enter a number of inches: ");
    scanf("%lf", &inches);
    centimeters = inches * CENT_PER_INCH;
    printf("%.3lf inches is %.3lf centimeters", inches, centimeters);
    return 0;
}

