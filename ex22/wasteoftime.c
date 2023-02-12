/**
 * @file wasteoftime.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[]) {
    char street_address[128]; 
    int digits; 
    digits = 0;
    int x; 
    x = 0;
    printf("Enter your street address: ");
    fgets(street_address, 128, stdin);
    while (street_address[x] != '\0') {
        if (isdigit(street_address[x])) {
            digits++;
        }
        x++;
    }
    printf("You entered %d digits.\n", digits);
    return 0;
}