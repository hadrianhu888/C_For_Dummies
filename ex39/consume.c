/**
 * @file consume.c
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
#include <complex.h>
#include <errno.h> 

int main(int argc,char **argv);

int main(int argc,char **argv)
{
    FILE *source_code; 
    /**
     * @brief prints out the source code of the program
     * 
     */
    while(argc>1){
        source_code = fopen(argv[1],"r");
        if(source_code==NULL){
            printf("Error: %s\n",strerror(errno));
            return 1;
        }
    }printf("%s\n",source_code);
    fclose(source_code);
    return 0;
}