/**
 * @file hiscore.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include <math.h>

#define BUFFERSIZE 255

int main(int argc,char **argv);

int main(int argc,char **argv)
{
    FILE *scores; 
    int s =1000;
    scores = fopen("scores.txt","w");
    if(!scores)
    {
        printf("Error opening file %s\n","scores.txt");
        exit (1);
    }
    fprintf(scores,"Player1: %d\n",s);
    fprintf(scores,"Player2: %d\n",s+100);
    fclose(scores);
    puts("High scores written to scores.txt"); 
    return 0;
}