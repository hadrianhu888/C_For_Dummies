/**
 * @file rudedos.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-13
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
void show_prompt(void); // function prototype

void show_prompt(void) {
    printf("What is thy bidding?\n");
}

int main(int argc, char *argv[]) {
    char input[64];
    do {
        show_prompt();
        fgets(input, 64, stdin);
        if (strcmp(input, "quit") == 0) {
            break;
        }
        printf("You said: %s", input);
    }
    while (strcasecmp("quit", input));
    puts("Oh! Apparently, I did! Goodbye!");
    return 0;
}


