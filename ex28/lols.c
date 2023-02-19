/**
 * @file lols.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h> 
#include <stdlib.h> 

int main(int argc, char **argv); // Function prototype

int main(int argc, char **argv) 
{
    int start, finish; 
    int *examine; 
    start = 100; 
    finish = 9; 
    examine = &start;
    printf("The value of start is %d", start);
    printf("\n");
    printf("The value of finish is %d", finish);
    printf("\n");
    printf("The value of examine is %d", *examine);
    printf("\n");
    printf("The value of examine is %d", examine);
    printf("\n");
    printf("The value of examine is %d", &examine);
    printf("\n");
    return 0;
}
