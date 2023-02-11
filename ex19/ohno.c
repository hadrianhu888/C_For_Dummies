/**
 * @file ohno.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    int naughty = 0;
    loop:
    printf("Naughty Naughty Naughty"); 
    printf("Oh no! I'm stuck in an infinite loop!\n\n");
    naughty++;
    if (naughty < 10) {
        goto loop;
    }
    /**
     * @brief same behavior, with a for loop as above
     * 
     */
    int i; 
    for (i = 0; i < 10; i++) {
        printf("Naughty Naughty Naughty"); 
        printf("Oh no! I'm stuck in an infinite loop!\n\n");
        goto loop;
    }
    return 0;
}