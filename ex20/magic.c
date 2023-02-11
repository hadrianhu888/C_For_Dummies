/**
 * @file magic.c
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

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    int magic[3][3] = {
        {8, 3, 4},
        {1, 5, 9},
        {6, 7, 2}
    };
    int row, col;
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%d\t", magic[row][col]);
        }
        printf("\n");
    }
    /**
     * @brief calculate the sum of each row and displays the sums to the user
     * 
     */
    int sum = 0;
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            sum += magic[row][col];
        }
        printf("The sum of row %d is %d\n", row, sum);        
    }
    return 0;
}
