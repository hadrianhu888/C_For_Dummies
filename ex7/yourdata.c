/**
 * @file yourdata.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define INCH2CM 2.54

int main (int argc, char ** argv); // function prototype

int main(int argc, char **argv) {
    char input[20];
    int age;
    float height;
    float height_cm;
    printf("Enter your age in years: ");
    gets(input);
    age = atoi(input);
    printf("Enter your height in inches: ");
    gets(input);
    height = atof(input);
    height_cm = height * INCH2CM;
    printf("You are %d years old and %.2f inches or %.2f cm tall\n", age, height, height_cm);
    return 0;
}
