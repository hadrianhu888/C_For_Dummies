/**
 * @file life.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main (int argc, char ** argv); // function prototype

int main (int argc, char ** argv) {
    int age;
    printf("How old are you? ");
    scanf("%d", &age);
    if (age < 18) {
        printf("You are not old enough to vote.\n");
    } else if (age >= 18) {
        printf("You are old enough to vote.\n");
    }
    return 0;
}