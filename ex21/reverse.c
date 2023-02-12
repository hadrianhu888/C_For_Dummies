/**
 * @file reverse.c
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
    char input[100];
    int size, c; 
    printf("Enter a string: ");
    gets(input);
    size = strlen(input);

    puts("This is how we say it backwards:");
    for (c = size - 1; c >= 0; c--) {
        printf("%c", input[c]);
    }
    puts("");
    return 0;
}