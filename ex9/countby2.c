/**
 * @file countby2.c
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
    int c;
    for (c = 0; c < 100; c+=2) {
        printf("%d\n\n", c);
    }
    return 0;
}
