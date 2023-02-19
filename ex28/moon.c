/**
 * @file moon.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <string.h> 
#include <assert.h> 

int main(int argc, char **argv); // Function prototype

int main(int argc, char **argv)
{
    float duration; 
    float *duration_ptr;
    float distance;
    float time; 
    float speed; 
    printf("Enter the distance to your location: ");
    scanf("%f", &distance);
    printf("Enter the time it took to get there: ");
    scanf("%f", &time);
    speed = distance / time;
    printf("Your speed was %f", speed);
    printf("\n");
    printf("Enter the duration of your trip: ");
    scanf("%f", &duration);
    duration_ptr = &duration;
    printf("You entered %f", duration);
    printf("\n");
    return 0;
}