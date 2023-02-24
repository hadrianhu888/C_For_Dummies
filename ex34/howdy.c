/**
 * @file howdy.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <complex.h>
#include <assert.h>

#define SIZE 5

int main(int argc, char **argv); // main function prototype

int main(int argc, char **argv)
{
    char *string;
    char *user_input;
    user_input = malloc(SIZE + 1);
    //get user input
    printf("Enter a string: ");
    fgets(user_input, SIZE + 1, stdin);
    //allocate memory for string
    if (strlen(user_input) > SIZE)
    {
        string = malloc(strlen(user_input) + 1);
    }
    else
    {
        string = malloc(SIZE + 1);
    }
    //check if malloc failed
    if (string == NULL)
    {
        fprintf(stderr, "malloc failed\n");
        exit(1);
    }
    //copy user input to string
    else if (string != NULL)
    {
        strcpy(string, user_input);
        printf("%s\n", string);
    }
    free(user_input);
    string = malloc(SIZE + 1);
    if (string == NULL)
    {
        fprintf(stderr, "malloc failed\n");
        exit(1);
    }
    else if (string != NULL)
    {
        strcpy(string, "Howdy");
        printf("%s\n", string);
    }
    free(string);
    return 0;
}

/*
 * @file howdy.c
 * @author your name 
 */

