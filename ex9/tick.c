/**
 * @file tick.c
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
    int tick = 0;
    printf ("Variable tick is unitialized");
    for (tick = 0; tick <= 10; tick++) {
        printf("\t In the loop, the value tick = %d\n", tick);
    }
    printf("\t Out of the loop, the value tick = %d\n", tick);
    return 0;
}

