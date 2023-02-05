/**
 * @file monopoly.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

long double ROLL = 32000000000;
long int SPACES = 40; // number of spaces on the board

int main (int argc, char ** argv); // function prototype

int main (int argc, char ** argv) {
    /**
     * @brief 
     * 
     */
    short int dice; 
    long int money = 0; 
    puts("Monopoly Simulator");
    for(dice=0; dice<ROLL; dice++) {
        money += (rand() % 6) + 1;
        printf("%d\n\n", money);
    }
    putchar('\n');
    printf("You made %d money in this game.\n", money);
    return 0;
}
