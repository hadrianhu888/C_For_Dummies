/**
 * @file text.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char ** argv); // function prototype

int main(int argc, char ** argv) {
    char name[40];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s\n\n", name);

    char name1[] = "George Washington";
    char name2[] = "John Adams";
    char name3[] = "Thomas Jefferson";
    char name4[] = "James Madison";

    printf("%17s %17s %17s %17s\n\n", name1, name2, name3, name4);
    return 0;
}

