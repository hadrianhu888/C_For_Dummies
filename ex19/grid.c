/**
 * @file grid.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief This implementation of grid.c uses a goto statement to print a grid
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>
#include <assert.h>

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    int x = 1;
    char a; 
    while (x < 10) {
        int y = 1;
        while (y < 10) {
            printf("%d\t", x * y);
            y++;
        }
        printf("\n");
        goto rescue;
        x++;
    }
    rescue: 
        return 0;
}