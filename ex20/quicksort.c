/**
 * @file quicksort.c
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
#include <time.h>
#include <assert.h>

#define COUNT 1000

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    int r[COUNT];
    int c;
    srand(time(NULL));
    for (c = 0; c < COUNT; c++) {
        r[c] = rand() % 100;
    }
    for (c = 0; c < COUNT; c++) {
        printf("%d\t", r[c]);
    }
    /**
     * @brief quick sort the array above using quicksort algorithm
     * 
     */
    int i, j, pivot, temp;
    for (i = 0; i < COUNT; i++) {
        pivot = i;
        for (j = i; j < COUNT; j++) {
            if (r[j] < r[pivot]) {
                pivot = j;
            }
        }
        temp = r[i];
        r[i] = r[pivot];
        r[pivot] = temp;
    }
    /**
     * @brief display the sorted array
     * 
     */
    printf("\n================================\n");
    for (c = 0; c < COUNT; c++) {
        printf("%d\t", r[c]);
    }
    return 0;
}

/**
 * @file quicksort.c
 * @author your name (Hadrian)
 */ 