/**
 * @file chilly.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char ** argv); // function prototype

int main (int argc, char ** argv) {
    int temp;
    // convert temperature in degrees celsius to fahrenheit
    temp = temp * 9 / 5 + 32;
    printf("Enter the temperature: ");
    scanf("%d", &temp);
    if (temp < 0) {
        printf("Brrrrr... It's freezing!\n");
    } else if (temp < 10) {
        printf("It's chilly!\n");
    } else if (temp < 20) {
        printf("It's cool!\n");
    } else if (temp < 30) {
        printf("It's warm!\n");
    }else if (temp == 72) {
        printf("It's perfect outside!\n");
    }
    else {
        printf("It's hot!\n");
    }
    return 0;
}

// Path: ex8\chilly.c

