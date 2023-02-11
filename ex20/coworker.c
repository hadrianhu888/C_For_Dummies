/**
 * @file coworker.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief Returns the IQ of the coworkers in an array format of size 5 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>
#include <assert.h>

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    int coworkers[] = {100, 90, 80, 70, 60};
    int i = 0;
    printf("The IQ of the coworkers: \n\n");
    for (i = 0; i < 5; i++) {
        printf("Coworker %d: %d\n", i, coworkers[i]);
    }
    return 0;
}