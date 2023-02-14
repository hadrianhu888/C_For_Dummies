/**
 * @file secnum.c
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
#include <time.h> 
#include <errno.h>
#include <ctype.h>

int repeat = 50; 
char c = '-';

int main(int argc, char *argv[]); // function prototype
void separator(int repeat, char c); // function prototype
void get_random_number(void); // function prototype
void repeat_random_number(long int r); // function prototype

void separator(int repeat, char c) {
    int i;
    for (i = 0; i < repeat; i++) {
        printf("%c", c);
    }
    printf("\n");
}

void get_random_number(void) {
    long int r; 
    srand(time(NULL));
    for (r = 0; r < 10; r++) {
        printf("%ld\n", rand());
    }
    separator(repeat, c);
    r = rand();
}

void repeat_random_number(long int r) {
    printf("The random number is %ld.\n", r);
    separator(repeat, c);
    printf("The random number is %ld.\n", rand());
    separator(repeat, c);
    printf("The random number is %ld.\n", rand());
    separator(repeat, c);
}

int main(int argc, char *argv[]) {
    long int r;
    get_random_number();
    repeat_random_number(r);
    return 0;
}



