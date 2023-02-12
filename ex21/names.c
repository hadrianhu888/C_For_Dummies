/**
 * @file names.c
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
    char names[4][3][20] = {
        {"John", "Smith", "Bob"},
        {"Mary", "Jane", "Sue"},
        {"Joe", "Bob", "Bill"},
        {"Sally", "Sue", "Mary"}
    };
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%s\n", names[i][j]);
        }        
    }
    for(i = 0; i < 4; i++) {
        printf("Names: %s %s %s\n", names[i][0], names[i][1], names[i][2]);
    }
    char dwarves[7][2][8] = {
    "bashful", "?", 
    "doc", "?",
    "dopey", "?",
    "grumpy", "?",
    "happy", "?",
    "sleepy", "?",
    "sneezy", "?"
    };
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 2; j++) {
            printf("%s\n", dwarves[i][j]);
        }
    }
    return 0;
}