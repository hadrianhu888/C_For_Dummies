/**
 * @file booboo1.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[]) {
    char yours[20];
    char mine[20];

    printf("What is your name? ");
    scanf("%s", yours);
    printf("What is my name? ");
    scanf("%s", mine);
    if (strcmp(yours, mine) == 0) {
        printf("We have the same name!\n");
    } else {
        printf("We have different names.\n");
    }
    printf("Your name is %s and my name is %s.\n", yours, mine);
    strcpy(mine, yours);
    printf("Your name is %s and my name is %s.\n", yours, mine);
    /**
     * @brief replicate strcpy with a while loop
     * 
     */
    int i = 0;
    while (yours[i] != '\0') {
        mine[i] = yours[i];
        i++;
    }
    puts(mine);
    puts(yours);
    return 0;
}