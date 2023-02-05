/**
 * @file chilly1.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main (int argc, char ** argv); // function prototype

int main (int argc, char ** argv) {
    /**
     * @brief if the temperature between 68 and 75, print "How pleasant!" 
     * otherwise print "The temperature could be better."
     *
     */
    int temp;
    printf("What is the temperature? ");
    scanf("%d", &temp);
    fflush(stdin);
    if (temp >= 68 && temp <= 75) {
        puts("How pleasant!");
    } else {
        puts("The temperature could be better.");
    }
    return 0;
}