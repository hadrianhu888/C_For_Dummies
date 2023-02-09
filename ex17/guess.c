/**
 * @file guess.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

#define RANGE 100

/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

int main(int argc, char *argv[]); // function prototype
int return_computer_guess(void);
void check_guesses_less_than_six(int guess_count); // function prototype

int return_computer_guess(void) {
    int computer_guess = rand() % RANGE; 
    return computer_guess;
}

void check_guesses_less_than_six(int guess_count) {
    if (guess_count < 6) {
        printf("You guessed it!\n");
        printf("The number was %d\n", guess_count);
        printf("It took you %d guesses\n\n", guess_count);
    } else {
        printf("You took too many guesses\n");
        printf("The number was %d\n", guess_count);
        printf("It took you %d guesses\n\n", guess_count);
    }
}


int main(int argc, char *argv[]) {
    int guess;
    /**
     * @brief input the guess number
     * 
     */
    /* printf("Enter your guess number: ");
    scanf("%d", &guess); */
    /**
     * @brief use random number generator for random guess number generation
     * 
     */
    srand((unsigned int) time(0));
    guess = rand() % RANGE;
    int min = 0;
    int max = RANGE;
    char response;
    int human_guess;
    int guess_counts = 1;// human guess number    c
    /**
     * @brief let the human guess the number
     * if the number is too low, let the player guess higher
        * if the number is too high, let the player guess lower
        * if the number is equal, end the game and let the player know
        * how many guesses it took
        * if more than 6 guesses, stop the game and let the player know
     */
    while (guess != human_guess || guess_counts > 6) {
        printf("Enter your guess number: ");
        scanf("%d", &human_guess);
        if (human_guess < guess) {
            printf("Too low, try again\n");
            guess_counts++;
            printf("The number of guesses is %d\n", guess_counts); 
        } else if (human_guess > guess) {
            printf("Too high, try again\n");
            guess_counts++;
            printf("The number of guesses is %d\n", guess_counts);
        } else {
            printf("You guessed it!\n");
            printf("The number was %d\n", guess);
            printf("It took you %d guesses\n\n", guess_counts);
            break;
        }
        if (guess_counts > 6) {
            printf("You took too many guesses\n");
            printf("The number was %d\n", guess);
            printf("It took you %d guesses\n\n", guess_counts);
            break;
        }
    }
    return 0;
}

