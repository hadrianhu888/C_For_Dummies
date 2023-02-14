/**
 * @file craps.c
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
#include <errno.h>
#include <time.h> 
#include <ctype.h>

int your_bet; /* default prototype */
int base_points = 10; /* default prototype */
int points = 10; /* default prototype */

int main(int argc, char *argv[]); // function prototype
int throw(void); 
int return_bets(void);
int return_points(void);

int throw(void) {
    int d1, d2;
    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;
    return d1 + d2;
}

int return_bets(void) {
    printf("How much do you want to bet? ");
    scanf_s("%d", 100, &your_bet);
    /**
     * @brief if the player won the roll, add points to the player's total
     * 
     */
    if (your_bet == 7 || your_bet == 11) {
        base_points += your_bet;
    } else if (your_bet == 2 || your_bet == 3 || your_bet == 12) {
        /**
         * @brief if the player lost the roll, subtract points from the player's total
         * 
         */
        base_points -= your_bet;
    }
    return your_bet;
}

int return_points(void) {
    printf("You have %d points.\n", base_points);
    return base_points;
}

int main(int argc, char *argv[]) {
    int roll;
    srand(time(NULL));
    roll = throw();
    printf("You rolled: %d\n", roll);
    return_bets();
    return_points();
    return 0;
}


