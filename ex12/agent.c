/**
 * @file agent.c
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
    int agent; 
    int code;
    printf("Enter your agent number: ");
    scanf("%d", &agent);
    fflush(stdin);
    printf("Enter your code: ");
    scanf("%c", &code);
    fflush(stdin);
    if (agent == 7 && code == 'B') {
        puts("Welcome aboard, James Bond!");
        puts("Your mission is to save the world.");
    } else if (agent == 7 && code == 'b') {
        puts("The authorization code is not correct.");
        puts("Please try again.");
        puts("The authorities have been notified.");
    } else {
        puts("The authorization code is not correct.");
        puts("Please try again.");
        puts("The authorities have been notified.");
    }
    return 0;
}