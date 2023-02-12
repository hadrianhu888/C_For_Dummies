/**
 * @file dwarves.c
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
    char dwarf[7][10] = {"Doc", "Dopey", "Bashful", "Grumpy", "Sneezy", "Happy", "Sleepy"};
    int x;
    char input[10];
    puts("Let see if you can name all the dwarves.");
    for (x = 0; x < 7; x++) {
        printf("Name a dwarf: ");
        gets(input);
        if (strcmp(input, dwarf[x]) == 0) {
            printf("Correct! %s is a dwarf.\n", input);
        } else {
            printf("Sorry, %s is not a dwarf.\n", input);
        }
    }
    return 0;
}