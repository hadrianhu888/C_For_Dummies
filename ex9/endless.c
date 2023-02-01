/**
 * @file endless.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char ** argv);  // function prototype

int main (int argc, char ** argv) 
{
    int packet; 
    printf("Processing 1000 packets\n\n");
    for(packet = 1; packet <= 1000; packet++) 
    {
        printf("Packet %d processed\n\n", packet);
        printf("Doing amazing things with the packet %d\n\n", packet);
    }
    return 0;
}

// Path: ex9\endless.c
