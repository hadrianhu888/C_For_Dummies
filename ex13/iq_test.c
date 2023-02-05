/**
 * @file iq_test.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-05
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

int main(int argc, char **argv) {
    /**
     * @brief if iq is less than 50 double it. If greater than 81, then add 20.
     * 
     */
    int iq;
    printf("What is your IQ? ");
    scanf("%d", &iq);
    fflush(stdin);
    if (iq < 50) {
        iq *= 2;
    } else if (iq > 81) {
        iq += 20;
    }
    printf("Your IQ is %d\n\n", iq);
    return 0;
}

// Path: ex13\iq_test.c

