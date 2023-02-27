/**
 * @file score.c
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
#include <errno.h> 

int main(int argc,char **argv);

int main(int argc,char **argv)
{
    FILE *scores;
    int s;
    scores =fopen("scores.dat","w");
    if(!scores)
    {
        printf("Error opening file %s\n","scores.dat");
        exit (1);
    }
    fscanf("Enter a score: %d",s);
    fprintf(scores,"Player1: %d\n",s);
    fprintf(scores,"Player2: %d\n",s+100);
    fclose(scores);
    puts("High scores written to scores.dat");
    return 0;
}

