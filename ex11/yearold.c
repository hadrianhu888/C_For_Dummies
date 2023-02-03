/**
 * @file yearold.c
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
    int age; 
    printf("How old are you? ");
    scanf("%d", &age);
    printf("You are %d years old\n\n", age);
    age++;
    printf("Next year you will be %d years old\n\n", age);
    return 0;
}

// Path: ex11\yearold.c