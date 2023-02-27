/**
 * @file scores_mod.c
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

int scores[10] = {1000, 900, 800, 700, 600, 500, 400, 300, 200, 100};

int main(int argc,char **argv);

int main(int argc,char **argv)
{
    int x;
    FILE *new_scores; 
    new_scores = fopen("scores_new.dat","w");
    if(!new_scores)
    {
        printf("Error opening file %s\n","scores_new.dat");
        exit (1);
    }
    for (x=0;x<10;x++)
    {
        fprintf(new_scores,"Player%d: %d\n",x+1,scores[x]);
    }
    fclose(new_scores);
    puts("High scores written to scores_new.dat");
    return 0;
}

// Path: ex40\scores_mod.c 