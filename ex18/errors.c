/**
 * @file errors.c
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
    if (code == 1) {
        puts("San Andreas Fault.\n");
    } else if (code == 2) {
        puts("Hayward Fault.\n"); 
    } else if (code == 3) {
        puts("Santa Monica Fault.\n");
    } else if (code == 4) {
        puts("Mount Diablo Fault.\n");
    } else if (code == 5) {
        puts("Golden Gate Bridge Fault.\n");
    } else {
        puts("Cascadia Subduction Region\n");
    }
    return 0;
}
