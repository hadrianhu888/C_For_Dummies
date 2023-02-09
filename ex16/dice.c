/**
 * @file dice.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void roll_dice(int *d1, int *d2); // function prototype
int main(int argc, char *argv[]); // function prototype
void roll_k_times(int k, int * rolls); // function prototype
int average_roll(int * rolls, int k); // function prototype

int average_roll(int * rolls, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += rolls[i];
    }
    // printf("The average roll is %d
    printf("The average roll is %d\n\n", sum / k);
    return sum / k;
}

void roll_dice(int *d1, int *d2) {
    srand(time(NULL));
    *d1 = rand() % 6 + 1;
    srand(time(NULL));
    *d2 = rand() % 6 + 1;
}

void roll_k_times(int k, int * rolls) {
    int d1, d2;
    for (int i = 0; i < k; i++) {
        roll_dice(&d1, &d2);
        rolls[i] = d1 + d2;
        /**
         * @brief print the array
         * 
         */
        printf("%d) You rolled a %d and a %d for a total of %d\n\n", i+1, d1, d2, rolls[i]);
    }
}

int main(int argc, char *argv[]) {
    int d1, d2, total;
    srand((unsigned)time(NULL));
    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;
    total = d1 + d2;
    printf("You rolled a %d and a %d for a total of %d\n\n", d1, d2, total);
    int k = 16; // number of rolls
    int rolls[k];
    roll_k_times(k, rolls);
    average_roll(rolls, k);
    return 0;
}

// Path: ex16\dice.c