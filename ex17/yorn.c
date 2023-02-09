/**
 * @file yorn.c
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
#include <ctype.h>
#include <time.h>

int main(int argc, char *argv[]); // function prototype

int main (int argc, char * argv[]) {
    int value;
    do {
        printf("Enter a value between 0 and 100: ");
        scanf("%d", &value);
    } while (value < 0 || value > 100);
    printf("The value you entered is %d\n", value);
    return 0;
}