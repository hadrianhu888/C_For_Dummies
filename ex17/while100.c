/**
 * @file while100.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]); // function prototype

/**
 * @brief use while loop to loop from 0 to 100 and print the value of c
 * 
 */

int main(int argc, char *argv[]) {
    int c = 0;
    while (c <= 100) {
        printf("The value of c is %d\n\n", c);
        c++;
    }
    return 0;
}

// Path: ex17\while100.c