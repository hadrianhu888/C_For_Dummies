/**
 * @file myfav.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char ** argv); // function prototype

int main(int argc, char **argv) {
    /**
    * @brief main program function
    *
    */
    char fav;
    printf("Enter your favorite letter: ");
    fav = getchar();
    if (fav == 'g' || fav == 'G') {
        printf("Your favorite letter is %c\n", fav);
    } else {
        printf("Your favorite letter is not g\n"); 
    }
    printf("Your favorite letter is %c\n", fav);
    return 0;
}
