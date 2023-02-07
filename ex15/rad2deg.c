/**
 * @file rad2deg.c
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

double x;
#define M_PI 3.14159265358979323846
#define RAD2DEG(x) 180*x / M_PI

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[])
{
    double x = 2.0;
    double y = x * 180 / M_PI;
    printf("The radian of %f is %f\n", x, y);
    double x_array [] = {2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    int i;
    for (i = 0; i < 9; i++)
    {
        double y = x_array[i] * 180 / M_PI;
        printf("The radian of %f is %f\n", x_array[i], y);
    }
    double z_array [] = {2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    int j;
    for (j = 0; j < 9; j++)
    {
        double z = RAD2DEG(z_array[j]);
        printf("The radian of %f is %f\n", z_array[j], z);
    }
    return 0;
}

