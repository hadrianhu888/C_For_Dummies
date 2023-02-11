/**
 * @file party.c
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
#include <string.h>
#include <assert.h>

/**
 * @brief This program asks the user for their political party affliation using switch case to confirm their user input. 
 * D for Democrat, R for Republican, I for Independent, and L for Libertarian.
 * 
 */

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    char party; 
    printf("Enter your political party affiliation: ");
    /**
     * @brief list the choices of parties by letters
        * R for Republican 
        * D for Democrat
     * I for Independent
        * L for Libertarian
        * N for None of the above
     */
    puts("R - Republican");
    puts("D - Democrat");
    puts("I - Independent");
    puts("L - Libertarian");
    puts("N - None of the above");
    scanf("%c", &party);
    switch(party) {
        case 'R':
            puts("You have chosen the Republican party.");
            break;
        case 'D':
            puts("You have chosen the Democrat party.");
            break;
        case 'I':
            puts("You have chosen the Independent party.");
            break;
        case 'L':
            puts("You have chosen the Libertarian party.");
            break;
        case 'N':
            puts("You have chosen the None of the above party.");
            break;
        default:
            puts("Invalid party.");
            break;
    }
    return 0;
}