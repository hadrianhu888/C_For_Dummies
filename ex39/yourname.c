/**
 * @file yourname.c
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
#include <ctype.h> 
#include <string.h>
#include <math.h> 
#include <complex.h> 

int main(int argc,char  **argv); 

int main(int argc,char  **argv)
{
    FILE *yourname; 
    yourname  = fopen("yourname.txt","w");
    char *name; 
    printf("Enter your name: ");
    scanf("%s",name);
    fprintf(yourname,"Your name is %s",name);
    fclose(yourname);
    return 0;
}

