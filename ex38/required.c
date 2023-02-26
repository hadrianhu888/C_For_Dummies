/**
 * @file required.c
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
    if (argc==1)
    {
        puts("This program requires at least one argument.");
        return 1;
    }
    printf("%s", argv[1]);
    /* else
    {
    printf("I shall now work on the following %d arguments:", argc-1);
    }
    for(i=1;i<argc;i++){
        printf("argv[%d] = %s\n",i,argv[i]);
    } */
    return 0;
}

