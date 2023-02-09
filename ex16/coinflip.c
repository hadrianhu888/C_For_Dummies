/**
 * @file coinflip.c
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

long int size = 1000;

int main(int argc, char *argv[]); // function prototype
int coin_flip(int *array, int size); // function prototype
float calculate_head_percent(int *array, int size); // function prototype
float calculate_tail_percent(int *array, int size); // function prototype
int return_total_flips(int *array, int size); // function prototype

int return_total_flips(int *array, int size) {
    int heads = 0;
    int tails = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    int total_flips = heads + tails;
    /**
     * @brief print the total number of flips
     * 
     */
    printf("The total number of flips is %d\n\n", total_flips);
    return total_flips;
}

float calculate_head_percent(int *array, int size) {
    int heads = 0;
    int tails = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    float head_percent = (float)heads / (float)size * 100;
    /**
     * @brief print the percentage of heads
     * 
     */
    printf("The percentage of heads is %f\n\n", head_percent);
    return head_percent;
}

float calculate_tail_percent(int *array, int size) {
    int heads = 0;
    int tails = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    float tail_percent = (float)tails / (float)size * 100;
    /**
     * @brief print the percentage of tails
     * 
     */
    printf("The percentage of tails is %f\n\n", tail_percent);
    return tail_percent;
}

int coin_flip(int *array, int size) {
    int heads = 0;
    int tails = 0;
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 2;
        if (array[i] == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    printf("Heads: %d\n\nTails: %d\n", heads, tails);
    return* array;
}

int main(int argc, char *argv[]) {
    int array[size];
    coin_flip(array, size);
    calculate_head_percent(array, size);
    calculate_tail_percent(array, size);
    return_total_flips(array, size);
    return 0;
}
// Path: ex16\coinflip.c