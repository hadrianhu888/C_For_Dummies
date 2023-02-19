/**
 * @file static.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void request(void); // Function prototype
void response(void); // Function prototype
int main(int argc, char **argv); // Function prototype

void request(void)
{
    printf("Please enter a number: ");
}

void response(void)
{
    int x; 
    scanf("%d", &x);
    printf("You entered %d", x);
}

int main(int argc, char **argv)
{
    request();
    response();
    return 0;
}

