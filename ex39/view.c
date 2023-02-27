/**
 * @file view.c
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
#include <string.h> 
#include <ctype.h>

#define BUFFERSIZE 255

int main(int argc,char **argv); 

int main(int argc,char **argv) 
{ 
    FILE *viewfile;
    FILE *dump_me; 
    char buffer[BUFFERSIZE];
    if (argc<2)
    {
        puts("Missing file name!");
        puts("Usage: view <filename>");
        puts("Example: view test.txt");
        exit (1); 
    }
    viewfile = fopen(argv[1],"r");
    if(!viewfile)
    {
        printf("Error opening file %s\n",argv[1]);
        exit (1);
    }
    while (fgets(buffer,BUFFERSIZE,viewfile))
    {
        printf("%s",buffer);
    }
    fclose(viewfile);
    dump_me=fopen("dump_me.txt","rb");
    if(!dump_me)
    {
        printf("Error opening file %s\n","dump_me.txt");
        exit (1);
    }
    while (fgets(buffer,BUFFERSIZE,dump_me))
    {
        printf("%s",buffer);
    }
    fclose(dump_me);
    return 0;
}
