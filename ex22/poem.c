/**
 * @file poem.c
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
    char input[128];
    int x, spaces, letters; 
    x = 0; 
    spaces = 0;
    letters = 0;
    printf("Enter a sentence: ");
    fgets(input, 128, stdin);
    while (input[x] != '\0') {
        if (input[x] == ' ') {
            spaces++;
        } else if (isalpha(input[x])) {
            letters++;
        }
        x++;
    }
    printf("You entered %d letters and %d spaces.\n", letters, spaces);
    return 0;
}