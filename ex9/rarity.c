/**
 * @file rarity.c
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
    int a,b;
    for (a = 0, b = 0; a < 10; a++, b+=2) {
        printf("%d\t%d\n",a,b);
    }
    return 0;
}

