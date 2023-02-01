/**
 * @file myfav_num.c
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
    int fav;
    printf("Enter your favorite number: ");
    scanf("%d", &fav);
    if (fav == 7) {
        printf("Your favorite number is %d\n\n", fav);
    } else {
        printf("Your favorite number is not 7\n\n");
    }
    printf("Your favorite number is %d\n", fav);
    return 0;
}

// Path: ex8\myfav_num.c