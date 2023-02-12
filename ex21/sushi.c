/**
 * @file sushi.c
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
    char phrase[] = "sooshi is mushi!";
    char ch; 
    int x = 0;
    do {
        ch = phrase[x];
        printf("%c-", ch);
        x++;
    } while (ch != '\0');
    x = 0;
    while (phrase[x] != '\0') {
        printf("%c ", phrase[x]);
        x++;
    } 
    for (x = 0; x < strlen(phrase); x++) {
        printf("%c ", phrase[x]);
    }
    puts(phrase);
    phrase[9] = 'i';
    puts(phrase);
    return 0;
}

