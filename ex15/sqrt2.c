/**
 * @file sqrt2.c
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
    double y = sqrt(x); 
    printf("The square root of %f is %f\n", x, y);
    double x_array [] = {2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    int i;
    for (i = 0; i < 9; i++)
    {
        double y = sqrt(x_array[i]);
        printf("The square root of %f is %f\n", x_array[i], y);
    }
    return 0;
}

