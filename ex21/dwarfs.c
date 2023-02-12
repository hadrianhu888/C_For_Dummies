/**
 * @file dwarfs.c
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
    char dwarfs[7][2][8] = {
        "Doc",
        "?",
        "Dopey",
        "?",
        "Bashful",
        "?",
        "Grumpy",
        "?",
        "Sneezy",
        "?",
        "Happy",
        "?",
        "Sleepy",
        "?"
    }; 
    int x;
    char input[10];
    puts("Let see if you can name all the dwarves.");
    while (1) {
        printf("Name a dwarf: ");
        gets(input);
        for (x = 0; x < 7; x++) {
            if (strcmp(input, dwarfs[x][0]) == 0) {
                printf("Correct! %s is a dwarf.\n", input);
                break;
            }
        }
        if (x == 7) {
        printf("Sorry, %s is not a dwarf.\n", input);
        }
        if (strcmp(dwarfs[0][1], "!") == 0 && strcmp(dwarfs[1][1], "!") == 0 &&
            strcmp(dwarfs[2][1], "!") == 0 && strcmp(dwarfs[3][1], "!") == 0 &&
            strcmp(dwarfs[4][1], "!") == 0 && strcmp(dwarfs[5][1], "!") == 0 &&
            strcmp(dwarfs[6][1], "!") == 0) {
        puts("You got them all!");
        break;
        }
    }
    return 0;
}

