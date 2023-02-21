/**
 * @file getname.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include <complex.h>
#include <assert.h>
#include <string.h> 
#include <ctype.h>
#include <errno.h> 
#include <math.h> 

int main(int argc, char **argv); // main function prototype

int main(int argc, char **argv)
{
    char name[100]; 
    char *p;
    int i;
    printf("Enter your name: ");
    fgets(name, 100, stdin);
    p = name;
    printf("\n");
    printf("Your name is: ");
    for (i = 0; i < strlen(name); i++)
    {
        printf("%c", *p);
        p++;
    }
    return 0;
}
