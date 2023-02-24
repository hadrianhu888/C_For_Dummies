/**
 * @file fred.c
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

int age; 
int main(int argc, char **argv); // function prototype
void show(void); // function prototype
extern int new_age; 

void show(void)
{
    printf("I am show.\n");
}

int main(int argc, char **argv)
{
    printf("Hello World!\n");
    age = 10; 
    printf("age is %d\n", age);
    show();
    printf("new_age is %d\n", new_age);
    return 0;
}

// Path: ex36/fred.c

