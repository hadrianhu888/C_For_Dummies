/**
 * @file safe.c
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

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    int combination[] = {36, 25, 16, 4}; 
    int i = 0;
    printf("The combination for the safe: \n\n");
    printf("Turn left to %d\n", combination[i]);
    i++;
    printf("Turn right to %d\n", combination[i]);
    i++;
    printf("Turn left to %d\n", combination[i]);
    i++;
    printf("Turn right to %d\n", combination[i]);
    i++;
    return 0;
}
