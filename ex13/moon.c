/**
 * @file moon.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define DISTANCE 378921.46
#define GRAVITY 1.622
#define MASS 7.34767309e22
#define PI 3.14159265358979323846

int main (int argc, char ** argv); // function prototype

int main (int argc, char ** argv) {
    float orbit; 
    orbit = DISTANCE * (GRAVITY * MASS) / (2 * PI * PI);
    printf("The moon's orbit is %3.2f meters.\n", orbit);
    return 0;
}

