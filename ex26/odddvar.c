/**
 * @file odddvar.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

typedef char byte; 
typedef int word; 

int main(int argc, char **argv); // Function prototype

word main(int argc, char **argv); // Function prototype

word main(int argc, char **argv)
{
    byte c; 
    word x; 
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("You entered %c and %d", c, x);
    return 0;
}