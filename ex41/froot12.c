/**
 * @file froot12.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief use fseek to set the current position in a file
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <errno.h>
#include <complex.h>
#include <windows.h>

#define RECSIZE 14

int main(int argc, char *argv[]);
void seek_root(void);
void replace_record(void); 

void seek_root(void)
{
    FILE *in = NULL;
    char *in_file = NULL;
    int c = 0;
    long position = 0;

    in_file = "ftell.txt";
    in = fopen(in_file, "r");
    if (in == NULL) {
        printf("ERROR: Could not open file %s for reading\n", in_file);
        fseek(in, 0, SEEK_SET); 
        return;
    }
    while((c = fgetc(in)) != EOF) {
        position = ftell(in);
        printf("ld\n",fseek(in, 0, SEEK_SET)); 
        printf("Position: %ld\n", position);
    }
    fclose(in);
}

void replace_record(void)
{
    FILE *in = NULL;
    char *in_file = NULL;
    int c = 0;
    long position = 0;

    in_file = "ftell.txt";
    in = fopen(in_file, "r");
    if (in == NULL) {
        printf("ERROR: Could not open file %s for reading\n", in_file);
        return;
    }
    while((c = fgetc(in)) != EOF) {
        position = ftell(in);
        printf("Position: %ld\n", position);
    }
    fclose(in);
}

int main(int argc, char *argv[])
{
    seek_root();
    replace_record();
    return 0;
}