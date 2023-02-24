/**
 * @file seven.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <complex.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv); // main function prototype

int main(int argc, char **argv)
{
    char dwarf[7][6] = {"Doc", "Dopey", "Bashful", "Grumpy", "Sneezy", "Happy", "Sleepy"};
    char *p;
    const char *seven_dwarfs[7] = {"Doc", "Dopey", "Bashful", "Grumpy", "Sneezy", "Happy", "Sleepy"};
    /**
     * @brief prints out the dwarf names
     * 
     */
    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", dwarf[i]);
    }
    /**
     * @brief prints out the seven dwarfs
     * 
     */
    while (*seven_dwarfs != NULL) {
        printf("%s\n", p);
        free(p);
    }
    return 0;
}