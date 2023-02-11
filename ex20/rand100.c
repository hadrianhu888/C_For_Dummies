/**
 * @file rand100.c
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

#define COUNT 100

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
    return 0;
}