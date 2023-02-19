/**
 * @file oar.c
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
    int twos[] = {1, 2, 4, 8, 
                16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483648};
    int x;
    int r; 
    unsigned short int v = 0; 
    for (x = 0; x < 32; x++)
    {
        r = v |twos[x];
        printf("The value of r is 0x%04X | %5d = 0x%04X", v, twos[x], r);
        printf("\n");
    }
    return 0;
}