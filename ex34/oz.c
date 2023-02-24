/**
 * @file oz.c
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
#include <ctype.h>

#define LINE_LENGTH 40

typedef struct cast {
    char *name;
    char *role;
    int age; 
} cast;

int main(int argc, char **argv)
{
    cast *oz = malloc(sizeof(cast));
    cast *toto = malloc(sizeof(cast));
    oz->name = "Toto";
    oz->role = "Dog";
    oz->age = 0;
    toto->name = "Titi";
    toto->role = "Dog";
    toto->age = 0;
    printf("%s is a %s and is %d years old.\n", oz->name, oz->role, oz->age);
    printf("%s is a %s and is %d years old.\n", toto->name, toto->role, toto->age);
    free(oz);
    return 0;
}

