/**
 * @file bitflip.c
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
#include <math.h>

int main(int argc, char *argv[]); // function prototype
void binString(int n); // function prototype

/**
 * @brief Purpose of this program is to perform the ones complement or the bit flip of a number
 * 
 */

void binString(int n)
{
    int k;
    for (k = 31; k >= 0; k--)
    {
        if (n >> k & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    printf("The value is: %d", n);
    printf("\n");
}

int main(int argc, char *argv[])
{
    int n;
    int ones;
    int twos;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The binary representation of the number is: ");
    binString(n);
    ones = ~n;
    printf("The binary representation of the ones complement is: ");
    binString(ones);
    twos = ones + 1;
    printf("The binary representation of the twos complement is: ");
    binString(twos);
    return 0;
}