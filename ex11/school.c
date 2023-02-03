/**
 * @file school.c
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
    int distance = 2; 

    printf("The distance is %d\n\n", distance);
    distance *=25;
    printf("The distance is %d\n\n", distance);
    distance /= 5;
    printf("The distance is %d\n\n", distance);
    distance += 10;
    printf("The distance is %d\n\n", distance);
    distance -= 5;
    printf("The distance is %d\n\n", distance);
    return 0;
}

// Path: ex11\school.c

