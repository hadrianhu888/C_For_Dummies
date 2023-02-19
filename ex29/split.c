/**
 * @file split.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h> 
#include <ctype.h> 
#include <string.h> 

int main(int argc, char *argv[]); // function prototype 

int main(int argc, char *argv[])
{
    unsigned short int hex; 
    unsigned short int upper;
    unsigned short int lower;
    printf("Enter a four-digit number: ");
    scanf("%x", &hex);
    lower = hex & 0x00FF;
    upper = hex & 0xFF00;
    upper >>= 8;
    printf("The upper byte is %x", upper);
    printf("\n");
    printf("The lower byte is %x", lower);
    printf("\n");
    return 0;
}
