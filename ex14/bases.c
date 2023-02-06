/**
 * @file bases.c
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
    puts("Base 10");
    printf("I must deliver %d pods to %d locations in San Francisco.\n", PODS, LOCATION);
    puts("Base 8");
    printf("I must deliver %o pods to %o locations in San Francisco.\n", PODS, LOCATION);
    puts("Base 16");
    printf("I must deliver %x pods to %x locations in San Francisco.\n", PODS, LOCATION);
    puts("Base 16");
    printf("I must deliver %X pods to %X locations in San Francisco.\n", PODS, LOCATION);
    printf("Scientitific notation: %e");
    printf("I must deliver %e pods to %e locations in San Francisco.\n", PODS, LOCATION);
    return 0;
}

// Path: ex14\bases.c

