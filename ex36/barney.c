/**
 * @file barney.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int age2; 

int main(int argc, char **argv); // function prototype
void show(void); // function prototype

void show(void)
{
    printf("I am show.\n");
}

int main(int argc, char **argv)
{
    printf("Hello World!\n");
    printf("age2 is %d\n", age2);
    show();
    return 0;
}

