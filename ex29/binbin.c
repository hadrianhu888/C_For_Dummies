/**
 * @file binbin.c
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

int main(int argc, char **argv); // Function prototype
void binString(int n); // Function prototype

int main(int argc, char **argv)
{
    int twos = 1; 
    int x, r; 
    unsigned short int v = 0; 
    for (x = 0; x < 16; x++) 
    {
        r = v | twos; 
        printf("0x%04x | %5d = 0x%04x", v, twos, r);
        binString(r);
        putchar('\n');
        twos += twos; 
    }
}

void binString(int n)
{
    int x; 
    int mask = 0x8000; 
    for (x = 0; x < 16; x++)
    {
        if (n & mask)
        {
            putchar('1');
        }
        else
        {
            putchar('0');
        }
        mask >>= 1; 
    }
}
