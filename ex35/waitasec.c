/**
 * @file waitasec.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define DELAY 0.1 

int main(int argc, char *argv[]); // function prototype
void pause(void); // pause function prototype

void pause(void)
{
    time_t then; 
    time(&then);
    while (difftime(time(NULL), then) < DELAY) {
        printf(".");
    }
}

int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
        pause();
    }
    return 0;
}

