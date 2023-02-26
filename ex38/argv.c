/**
 * @file argv.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-26
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

int main(int argc,char **argv);

int main(int argc,char **argv)
{
    int i; 
    for(i=0;i<argc;i++){
        printf("argv[%d] = %s\n\n",i,argv[i]);
    }
    return 0;
}