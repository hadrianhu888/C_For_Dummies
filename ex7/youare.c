/**
 * @file youare.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char ** argv); // function prototype

int main(int argc, char **argv) {
    char first_name[20];
    char last_name[20];
    printf("What is your first name? ");
    gets(first_name);
    printf("What is your last name? ");
    gets(last_name);
    printf("Pleased to meet you, %s %s\n", first_name,last_name);
    return 0;
}
