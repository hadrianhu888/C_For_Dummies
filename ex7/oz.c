/**
 * @file oz.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
int main (int argc, char ** argv); // function prototype

int main (int argc, char ** argv)
{
    char oz;
    oz = '0';
    printf("This book covers subjects from %c\n\n,", oz);
    oz = 'Z';
    printf(" to %c\n\n", oz);
    char oz1; 
    char oz2; 
    oz1 = '0'; 
    oz2 = 'Z';
    printf("\n\nThis book covers subjects from %c to %c\n\n", oz1, oz2);
    return 0;
}
