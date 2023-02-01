/**
 * @file retire.c
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
    int age; 
    int retire_age;
    int years_left;
    int retire_year;
    int current_year;
    printf("Enter your current age: ");
    scanf("%d", &age);
    printf("Enter the age you want to retire: ");
    scanf("%d", &retire_age);
    if (age >= retire_age) {
        printf("You are already retired!\n");
        return 0;
    } else {
        printf("You are not retired yet!\n");
    }
    years_left = retire_age - age;
    printf("You have %d years left until you can retire\n\n", years_left);
    printf("Enter the current year: ");
    scanf("%d", &current_year);
    retire_year = current_year + years_left;
    printf("You can retire in %d\n", retire_year);
    return 0;
}