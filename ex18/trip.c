/**
 * @file trip.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <assert.h>

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    char c; 
    puts("Available packages: ");
    puts("A - Transporation, Hotel and Meals");
    puts("B - Transportation and Hotel");
    puts("C - Transportation only");
    puts("D - Hotel and Meals only");
    puts("E - Hotel only");
    puts("F - Meals only");
    puts("G - None of the above");
    printf("Enter the package you want: ");
    scanf("%c", &c);
    switch(c) {
        case 'A':
            puts("You have chosen package A.");
            break;
        case 'B':
            puts("You have chosen package B.");
            break;
        case 'C':
            puts("You have chosen package C.");
            break;
        case 'D':
            puts("You have chosen package D.");
            break;
        case 'E':
            puts("You have chosen package E.");
            break;
        case 'F':
            puts("You have chosen package F.");
            break;
        case 'G':
            puts("You have chosen package G.");
            break;
        default:
            puts("Invalid package.");
            break;
    }
    return 0;
}