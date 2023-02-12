/**
 * @file greetings.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <assert.h> 
#include <errno.h>

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[])
{
    char prompt[] = "Please enter your name: ";
    char gratis[] = "Thank you for using this program.";
    char first_name[20];
    char last_name[20];
    char full_name[40];

    printf("%s", prompt);
    scanf("%s", first_name);
    printf("Please enter your last name: ");
    scanf("%s", last_name);
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    printf("Hello %s, nice to meet you!\n", full_name);
    printf("%s\n", gratis);
    return 0; 
}
