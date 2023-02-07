/**
 * @file treetall.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(int argc, char *argv[]); // function prototype

#define RAD 57.295779513082320876798154814105

int main(int argc, char *argv[])
{
    double opposite, angle; 
    float degrees, adjacent;
    puts("How tall is the tree in feet?");
    scanf("%f", &adjacent);
    puts("How far away is the tree in feet?");
    scanf("%f", &degrees);
    angle = degrees / RAD;
    opposite = fabs(tan(angle) * adjacent);
    printf("The tree is %f feet tall\n", opposite);
    return 0;
}

