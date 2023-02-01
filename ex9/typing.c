/**
 * @file typing.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char ** argv);  // function prototype

int main (int argc, char ** argv) {
    char ch; 
    puts("Typing Program\n\n");
    puts("Type away: ");
    for (;;) {
        ch = getchar();
        if (ch == '\n') {
            break;
        }	
    }
    return 0;
}

// Path: ex9\typing.c

