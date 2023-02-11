/**
 * @file lotto_3d.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#define RANGE 50
#define BALLS 6

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    int numbers[RANGE];
    int c, ball; 
    printf("\n================================================================\n");
    puts("L O T T O  3 D");
    srand(time(NULL));
    for (c = 0; c < RANGE; c++) {
        numbers[c] = c + 1;
    }
    for (c = 0; c < RANGE; c++) {
        printf("%d\t", numbers[c]);
    }
    /**
     * @brief Draw the numbers in the specified range
     * 
     */
    printf("\n================================================================\n");
    puts("Here they come!");
    for (ball = 0; ball < BALLS; ball++) {
        int r = rand() % RANGE;
        printf("%d\t", numbers[r]);
        numbers[r] = numbers[RANGE - 1];        
    }
    /**
     * @brief Numbers drawn
     * 
     */
    printf("\n================================================================\n");
    puts("Numbers drawn");
    for (c = 0; c < RANGE; c++) {
        printf("%d\t", numbers[c]);
    }
    return 0;
}