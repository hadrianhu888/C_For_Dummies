/**
 * @file const_hello.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define HELLO "Hello"
#define COMMA ","
#define SPACE " "
#define WORLD "World"

int main (int argc, char ** argv);  // function prototype

int main (int argc, char ** argv) {
    printf("%s%s%s%s\n\n", HELLO, COMMA, SPACE, WORLD);
    return 0;
}

