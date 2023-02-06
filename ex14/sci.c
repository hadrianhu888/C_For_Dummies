/**
 * @file sci.c
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

#define BIG 246800000000000.000
#define TEENSY 0.0000000000000097531

int main (int argc, char ** argv); // function prototype

int main (int argc, char ** argv) {
    puts("Using %f: ");
    printf("BIG: %f\nTEENSY: %f", BIG,TEENSY);
    puts("Using %d: ");
    printf("BIG: %d\nTEENSY: %d", BIG,TEENSY);
    puts("Using %e: ");
    printf("BIG: %e\nTEENSY: %e", BIG,TEENSY);
    puts("Using %g: ");
    printf("BIG: %g\nTEENSY: %g", BIG,TEENSY);
    return 0;
}

// Path: ex14\sci.c