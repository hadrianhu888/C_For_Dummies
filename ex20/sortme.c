/**
 * @file sortme.c
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
#include <errno.h>
#include <math.h>
#include <assert.h>

#define SIZE 6 // size of array

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    int lotto[] = {10, 48, 17, 71, 65, 55}; 
    int a,b,c,temp; 
    printf("\n================================\n");
    puts("Here is the array unsorted: ");
    for (a = 0; a < SIZE; a++) {
        printf("%d\t", lotto[a]);
    }
    printf("\n================================\n");
    puts("Here is the sorted array: ");
    for (a = 0; a < SIZE; a++) {
        for (b = a + 1; b < SIZE; b++) {
            if (lotto[a] > lotto[b]) {
                temp = lotto[a];
                lotto[a] = lotto[b];
                lotto[b] = temp;
            }
        }
    }
    for (a = 0; a < SIZE; a++) {
        printf("%d\t", lotto[a]);
    }
    printf("\n================================\n");
    /**
     * @brief sort the array from largest to smallest 
     * 
     */
    puts("Here is the array sorted from largest to smallest: ");
    for (a = 0; a < SIZE; a++) {
        for (b = a + 1; b < SIZE; b++) {
            if (lotto[a] < lotto[b]) {
                temp = lotto[a];
                lotto[a] = lotto[b];
                lotto[b] = temp;
            }
        }
    }
    for (a = 0; a < SIZE; a++) {
        printf("%d\t", lotto[a]);
    }
    return 0;
}
