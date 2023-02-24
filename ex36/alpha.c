/**
 * @file alpha.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

void alpha(void);
void beta(void);
void gamma(void);
void a(void);

void a(void)
{
    printf("Hello from a!\n");
}

int main(int argc, char *argv[])
{
    printf("Hello World!\n");
    a(); 
    alpha();
    beta();
    gamma();
    return 0;
}

void alpha(void)
{
    printf("I am alpha.\n");
}

void beta(void)
{
    printf("I am beta.\n");
}

void gamma(void)
{
    printf("I am gamma.\n");
}

