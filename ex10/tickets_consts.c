/**
 * @file tickets_consts.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SPEED_LIMIT 65
#define RATE 26
#define FIRST_TICKET 50
#define SECOND_TICKET 100
#define THIRD_TICKET 110

int main (int argc, char ** argv);  // function prototype

int main (int argc, char ** argv) {
    int total, fine, speeding; // declare variables
    puts("Speeding Tickets: \n");

    /**
    * @brief first ticket
    *
    */

    speeding = 88 - 85;
    fine = FIRST_TICKET + (speeding * RATE);
    total = fine;    
    printf("For going %d mph over the limit, you owe $%d\n", speeding, fine);

    /**
     * @brief second ticket
     * 
     */

    speeding = 99 - 85;
    fine = SECOND_TICKET + (speeding * RATE);
    total += fine;
    printf("For going %d mph over the limit, you owe $%d\n", speeding, fine);

    /**
     * @brief third ticket
     * 
     */

    speeding = 120 - 85;
    fine = THIRD_TICKET + (speeding * RATE);
    total += fine;

    /**
     * @brief Display total
     * 
     */

    printf("For going %d mph over the limit, you owe $%d\n  Total: $%d\n", speeding, fine, total);


    return 0;

}


