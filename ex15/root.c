/**
 * @file root.c
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

double return_negative_root(double x); // function prototype

double return_negative_root(double x)
{
    double root = sqrt(x);
    if (x < 0) {
        x = fabs(x); 
        float real_x = 0;
        root = sqrt(x);
        printf("The square root of a negative number is the complex number %f + %fi\n", real_x, root);
    }
    return root;
}

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[])
{
    double x; 
    double root; 
    puts("Enter a number: ");
    scanf("%lf", &x);
    root = fabs(sqrt(x));
    /**
     * @brief check if the number is negative
     * 
     */
    if (x < 0) {
        root = return_negative_root(x);
    } else {
        printf("The square root of %f is %f\n", x, root);
    }    
    return 0;
}


