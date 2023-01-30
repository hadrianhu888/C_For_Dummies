/**
 * @file age.c
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
    char age = '0';
    printf("I am %c years old\n\n", age);
    age = '35';
    printf("I am %c years old\n\n", age);
    return 0;
}
