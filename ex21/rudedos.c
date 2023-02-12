/**
 * @file rudedos.c
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

int main(int argc, char *argv[]) {
    char command[100];
    char response[] = "You think I know how to...";
    char new_response[200];
    while (strcasecmp(command, "quit") != 0) {
        printf("What do you want to do? ");
        gets(command);
        if (strcasecmp(command, "quit") != 0) {
            strcpy(new_response, response);
            strcat(new_response, command);
            strcat(new_response, "?");
            puts(new_response);
        }
    }
    return 0;
}