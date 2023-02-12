/**
 * @file mystuff.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-12
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

struct stuff {
    char letter; 
    int number;
}; 

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[]) {
    struct stuff my_stuff; 
    struct stuff his_stuff;
    struct stuff her_stuff;
    /**
     * @brief let the user enter the information for the structure 
     * 
     */
    printf("Enter a letter: ");
    my_stuff.letter = getchar();
    printf("Enter a number: ");
    scanf("%d", &my_stuff.number);
    /**
     * @brief display some random information for his_stuff struct 
     * 
     */
    his_stuff.letter = 'a';
    his_stuff.number = 1;
    /**
     * @brief display some random information for her_stuff struct
     * 
     */
    her_stuff.letter = 'a';
    her_stuff.number = 21; 
    printf("my_stuff.letter = %c\n", my_stuff.letter);
    printf("my_stuff.number = %d\n", my_stuff.number);
    /**
     * @brief display some random information for his_stuff struct
     * 
     */
    printf("his_stuff.letter = %c\n", his_stuff.letter);
    printf("his_stuff.number = %d\n", his_stuff.number);
    /**
     * @brief display some random information for her_stuff struct
     * 
     */
    printf("her_stuff.letter = %c\n", her_stuff.letter);
    printf("her_stuff.number = %d\n", her_stuff.number);
    return 0;
}
