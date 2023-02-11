/**
 * @file craps.c
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
#include <time.h>
#include <assert.h>
#include <math.h>

/**
 * @brief Plays the game of craps with the user.
 * 
 */

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    int bet, roll, point; 
    char ch;
    srand(time(NULL));
    printf("Enter your bet: ");
    scanf("%d", &bet);
    assert(bet > 0);
    roll = rand() % 6 + rand() % 6 + 2;
    printf("You rolled: %d\n", roll);
    switch(roll) {
        case 7:
        case 11:
            printf("You win!\n");
            break;
        case 2:
        case 3:
        case 12:
            printf("You lose!\n");
            break;
        default:
            point = roll;
            printf("Your point is %d\n\n", point);
            printf("Roll again? ");
            scanf(" %c", &ch);
            while (ch == 'y') {
                roll = rand() % 6 + rand() % 6 + 2;
                printf("You rolled: %d\n", roll);
                if (roll == point) {
                    printf("You win!\n");
                    break;
                }
                if (roll == 7) {
                    printf("You lose!\n");
                    break;
                }
                printf("Roll again? ");
                scanf(" %c", &ch);
            }
            break;
        }
    return 0;
}