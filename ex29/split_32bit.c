/**
 * @file split_32bit.c
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
    long unsigned int hex;
    long unsigned int first;
    long unsigned int second;
    long unsigned int third;
    long unsigned int fourth;
    printf("Enter a 32-digit number: ");
    /**
     * @brief split the 32 bit long unsigned int into four 8 bit long unsigned ints
     * 
     */
    scanf("%lx", &hex);
    first = hex & 0x000000FF;
    second = hex & 0x0000FF00;
    second >>= 8;
    third = hex & 0x00FF0000;
    third >>= 16;
    fourth = hex & 0xFF000000;
    fourth >>= 24;
    printf("The first byte is %lx", first);
    printf("\n");
    printf("The second byte is %lx", second);
    printf("\n");
    printf("The third byte is %lx", third);
    printf("\n");
    printf("The fourth byte is %lx", fourth);
    printf("\n");
    return 0;
}
