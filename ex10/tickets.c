/**
 * @file tickets.c
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

int main (int argc, char ** argv);  // function prototype

int main(int argc, char **argv) {
    int total, fine, speedlimit, rate, first_ticket, second_ticket, third_ticket; // declare variables
    puts("speedlimit Tickets: \n");

    /**
    * @brief first ticket
    *
    */

    speedlimit = 88 - 85;
    fine = 50 + (speedlimit * 5);
    total = fine;
    first_ticket = fine;
    printf("For going %d mph over the limit, you owe $%d\n", speedlimit, fine);

    /**
    * @brief second ticket
    *
    */

    speedlimit = 99 - 85;
    fine = 50 + (speedlimit * 5);
    second_ticket = fine;
    total += fine;
    printf("For going %d mph over the limit, you owe $%d\n", speedlimit, fine);

    /**
    * @brief third ticket
    *
    */

    speedlimit = 120 - 85;
    fine = 50 + (speedlimit * 5);
    third_ticket = fine;
    total += fine;
    printf("For going %d mph over the limit, you owe $%d\n", speedlimit, fine);

    /**
    * @brief Display total
    *
    */

    printf("Your total is $%d\n", total);
    return 0;
}
