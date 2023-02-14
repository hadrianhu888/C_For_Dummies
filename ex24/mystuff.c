/**
 * @file mystuff.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

typedef struct stuff {
    char name[20];
    int age;
} stuff;

void show_stuff(stuff *s); // function prototype

int main(int argc, char **argv); // function prototype

void show_stuff(stuff *s) {
    printf("The stuff is %s and is %d years old.\n", s->name, s->age);
}

int main(int argc, char **argv) {
    stuff s;
    strcpy_s(s.name, 20, "Mason");
    s.age = 12;
    show_stuff(&s);
    return 0;
}

