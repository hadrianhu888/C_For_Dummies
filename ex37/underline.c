/**
 * @file underline.c
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

int main(int argc, char **argv); 

int main(int argc, char **argv)
{
    char ch;
    int i;
    /**
     * @brief gets the string from the user 
     * and replaces spaces with underscores
     * 
     */
    while ((ch = fgetc(stdin)) != EOF)
    {
        fputc(ch, stdout);
        if (ch == ' ')
        {
            ch = '_';
        }
    }
    /**
     * @brief prints the string
     * 
     */
    for (i = 0; i < argc; i++)
    {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}
