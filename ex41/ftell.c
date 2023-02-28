/**
 * @file ftell.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief use ftell to get the current position in a file
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h> 
#include <getopt.h>
#include <errno.h> 
#include <complex.h> 

void readfile(void);
void writefile(void);
int main(int argc, char *argv[]); 

void readfile(void)
{
    FILE *in = NULL;
    char *in_file = NULL;
    int c = 0;
    long position = 0;

    in_file = "ftell.c";
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

void writefile(void)
{
    FILE *out = NULL;
    char *out_file = NULL;
    int c = 0;
    long position = 0;

    out_file = "ftell.txt";
    out = fopen(out_file, "w");
    if (out == NULL) {
        printf("ERROR: Could not open file %s for writing\n", out_file);
        return;
    }
    for (c = 0; c < 10; c++) {
        position = ftell(out);
        printf("Position: %ld\n", position);
        fputc('a', out);
    }
    fclose(out);
}

int main(int argc, char *argv[])
{
    readfile();
    writefile();
    return 0;
}


