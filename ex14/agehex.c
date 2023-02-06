/**
 * @file agehex.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief Displays the users age in hex from decimal input format.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main (int argc, char ** argv); // function prototype

int main(int argc, char ** argv) {
    int age;
    printf("Enter your age in decimal format: ");
    scanf("%d", &age);
    printf("Your age in hex is: %x\n", age);
    return 0;
}