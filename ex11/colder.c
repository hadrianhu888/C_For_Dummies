/**
 * @file colder.c
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
    int t;
    t = -50;
    printf("\n\nYou may think it's %d degrees outside, but it's really %d degrees outside.\n\n", t, t-10);
    return 0;
}

