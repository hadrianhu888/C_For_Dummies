/**
 * @file io.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc,char  **argv);
 
int main(int argc,char  **argv)
{
    char ch;
    while((ch == fgetc(stdin)) != EOF)
    {
        fputc(ch,stdout);   
    }
    return 0;
}