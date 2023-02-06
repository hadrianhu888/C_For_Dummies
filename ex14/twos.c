/**
 * @file twos.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define POUNDS 0x9C
#define YEN 0x64
#define YUAN 0x94 

int main (int argc, char ** argv); // function prototype

int main (int argc, char ** argv) {
    float amounts, bp, jy, cy;
    float d2p = 0.5407; 
    float d2y = 106.70; 
    float d2c = 6.92;
    printf("Enter the amount of dollars you have: ");
    scanf("%f", &amounts);
    bp = amounts * d2p;
    jy = amounts * d2y;
    cy = amounts * d2c;
    printf("You have %5.3f pounds, %5.3f yen, and %5.3f yuan.\n", bp, jy, cy); //display to three decimal places 
    return 0;
}

// Path: ex14\twos.c