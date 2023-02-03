/**
 * @file prepost.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char ** argv); //function prototype

int main(int argc, char **argv) {
    int alpha, beta; 
    alpha = 5;
    beta = alpha--;
    printf("alpha is %d\n\n", alpha);
    printf("beta is %d\n\n", beta);

    int age = 35;	
    age++;
    age++;
    age++;
    printf("age is %d\n\n", age);

    age += 3;
    printf("age is %d\n\n", age);

    return 0;
}

// Path: ex11\prepost.c
