/**
 * @file showfroot.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief Display the root directory of a FAT12 file system
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

int main(int argc, char *argv[]);
void show_root(void);

void show_root(void)
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
    show_root();
    return 0;
}