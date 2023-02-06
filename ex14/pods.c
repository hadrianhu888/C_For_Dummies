/**
 * @file pods.c
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

#define PODS 100
#define LOCATION 0xBA3C

int main (int argc, char ** argv); // function prototype

int main (int argc, char ** argv) {
    puts("Base 10\n\n");
    printf("I must deliver %d pods to San Francisco.\n", PODS);
    printf("I must deliver %d pods to %d locations.\n", PODS, LOCATION);
    return 0;
}

