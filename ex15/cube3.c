/**
 * @file cube3.c
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

int main(int argc, char *argv[])
{
    double x = 2.0;
    double y = cbrt(x);
    printf("The cube root of %f is %f\n", x, y);
    double x_array [] = {2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    int i;
    for (i = 0; i < 9; i++)
    {
        double y = cbrt(x_array[i]);
        printf("The cube root of %f is %f\n", x_array[i], y);
    }
    double z_array [] = {2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    int j;
    for (j = 0; j < 9; j++)
    {
        double z = pow(z_array[j], (double)(1.0/3));
        printf("The cube root of %f is %f\n", z_array[j], z);
    }
    return 0;
}

