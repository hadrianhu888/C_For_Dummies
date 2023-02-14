/**
 * @file modline.c
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

char line[81]; /* global variable */
char *p; /* global variable */
int linelen = 50; /* global variable */
int repeater = 50; /* global variable */
char *c; /* global variable */

void showline(void); /* function prototype */
void dashes(char *p); /* function prototype */
void separator(int repeat, char *c); /* function prototype */
int main(int argc, char **argv); /* function prototype */

void showline(void) {
    printf("%s\n", line);
}

void dashes(char *p) {
    int i;
    for (i = 0; i < linelen; i++) {
        if (isalpha(*p)) {
            printf("-");
        } else {
            printf("%c", *p);
        }
        p++;
    }
    printf("\n");
}

void separator(int repeat, char *c) {
    int i;
    for (i = 0; i < repeat; i++) {
        printf("%s", c);
    }
    printf("\n");
}

int main(int argc, char **argv) {
    *p = '_';
    *c = '-';
    printf("Enter a line of text:"); /* prompt for a line of text */ 
    fgets(line, 81, stdin);
    linelen = strlen(line);
    showline();
    dashes(p);
    separator(repeater,c);
    strcpy_s(line, 81, "This is a test.");
    linelen = strlen(line);
    showline();
    dashes(p);
    separator(repeater,c);
    return 0;
}

