/**
 * @file prompts.c
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
#include <errno.h>

int main(int argc, char **argv); // main function prototype

int main(int argc, char **argv)
{
    char prompts[3][6] = {"Type something", "C:\\>", "."};
    char *p;
    p = prompts[0];
    puts(p);
    p = prompts[1];
    puts(p);
    p = prompts[2];
    puts(p);
    //print out the prompts
    for (int i = 0; i < 3; i++) {
        printf("%s\n", prompts[i]);
        fgets(prompts[i], 6, stdin);
    }
    //print out the prompts
    return 0;
}