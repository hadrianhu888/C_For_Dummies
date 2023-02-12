/**
 * @file password.c
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
#include <string.h>
#include <assert.h>
#include <errno.h>

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[]) {
    char string[16];
    char password[] = "password";
    int result; 
    printf("Enter the password: ");
    gets(string);
    result = strcmp(string, password);
    if (result == 0) {
        printf("Access granted.\n");
    } else {
        printf("Access denied.\n");
    }
    strcmp(string, password) == 0 ? printf("Access granted.\n") : printf("Access denied.\n");
    return 0;
}