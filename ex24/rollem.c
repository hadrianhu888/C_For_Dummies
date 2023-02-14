/**
 * @file rollem.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <errno.h>
#include <ctype.h>

int repeat = 50;
char c = '-';
int sides = 6;
int *dice; // pointer to an int
int status = 0;

int get_dice_to_roll(int dice); // function prototype
int get_die_roll(int dice); // function prototype
int get_total_sum_of_rolls(int dice); // function prototype
int main(int argc, char *argv[]); // function prototype

int get_dice_to_roll(int dice) {
    printf("How many dice do you want to roll? ");
    scanf_s("%d", &dice);
    return dice;
}

int get_die_roll(int dice) {
    srand(time(NULL));
    int i;
    int total = 0;
    for (i = 0; i < dice; i++) {
        int roll = rand() % sides + 1;
        printf("Dice Number %d: You rolled a %d\n", i + 1, roll);
        total += roll;
    }
    return total;
}

int get_total_sum_of_rolls(int dice) {
    int total = 0;
    total = get_die_roll(dice);
    printf("The total of your %d rolls is %d\n", dice, total);
    return total;
}

int main(int argc, char *argv[]) {
    int dice;
    int total = 0;
    dice = get_dice_to_roll(dice);
    total = get_total_sum_of_rolls(dice);
    return 0;
}


