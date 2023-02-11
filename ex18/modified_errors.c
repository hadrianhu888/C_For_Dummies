/**
 * @file modified_errors.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <assert.h>

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    int code; 
    printf("Enter the error code: ");
    scanf("%d", &code);
    switch(code) {
        case 1:
            puts("San Andreas Fault.\n");
            break;
        case 2:
            puts("Hayward Fault.\n");
            break;
        case 3:
            puts("Santa Monica Fault.\n");
            break;
        case 4:
            puts("Mount Diablo Fault.\n");
            break;
        case 5:
            puts("Golden Gate Bridge Fault.\n");
            break;
        default:
            puts("Cascadia Subduction Region\n");
            break;
    }
    return 0;
}