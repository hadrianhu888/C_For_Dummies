/**
 * @file creator.c
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
#include <string.h>
#include <ctype.h> 

int main(int argc,char  **argv);

int main(int argc, char **argv)
{
    FILE *myFile;
    char c; 
    myFile = fopen("creator.txt","w");
    if (myFile == NULL)
    {
        printf("Error Reading File");
        exit (0);
    }
    while ((c = fgetc(myFile)) != EOF)
        printf("%c", c);
    fclose(myFile);
    return 0;
}