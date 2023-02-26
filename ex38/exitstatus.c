/**
 * @file exitstatus.c
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

int main(int argc,char **argv)
{
    int r;
    printf("Enter the exit status value: "); 
    scanf("%d", &r);
    int i;
    for(i=0;i<argc;i++){
        printf("argv[%d] = %s", i, argv[i]);
        exit(r); 
    }    
    return r;
}
