/**
 * @file metric.c
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

#define KPM 1.609344

int main(int argc, char **argv); // Function prototype

int main(int argc, char **argv)
{
    double miles; 
    double kilometers; 
    printf("Enter a number of miles: ");
    double *kilometers_ptr; 
    double *p_miles; 
    kilometers_ptr = (double *)malloc(sizeof(double)); 
    p_miles = (double *)malloc(sizeof(double));    
    scanf("%lf", &miles);
    *p_miles = miles;
    kilometers = *p_miles * KPM;
    *kilometers_ptr = kilometers;
    printf("%.3lf miles is %.3lf kilometers", miles, kilometers);
    //print the kilometers pointer address 
    printf("\n\nThe address of the pointer is: %p", kilometers_ptr);
    return 0;
}

