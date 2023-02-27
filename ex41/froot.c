/**
 * @file froot.c
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
    char froot[25][4] ={ "app","apricot","avocado","banana","blackberry","blueberry","cherry","coconut","fig","grape","grapefruit","kiwi","lemon","lime","mango","orange","papaya","peach","pear","pineapple","plum","raspberry","strawberry","watermelon"};
    int x;
    FILE *fruits;
    fruits = fopen("fruits.dat","w");
    if(!fruits)
    {
        printf("Error opening file %s\n","fruits.dat");
        exit (1);
    }
    for (x=0;x<25;x++)
    {
        fprintf(fruits,"%s\n",froot[x]);
    }
    fclose(fruits);
    puts("Fruits written to fruits.dat");
    return 0;
}

// Path: ex41\froot.c