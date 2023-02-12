/**
 * @file mybday.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>
#include <math.h>

typedef struct date {
    int day;
    int month;
    int year;
} date;
typedef struct month {
    char name[10];
    char abbrev[4];
    struct date date; 
    int number;
} month;

typedef struct family {
    char name[20];
    struct date birthday; 
} family;

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[]) {
    struct family my_family;
    strcpy_s(my_family.name, 128, "Mason");
    my_family.birthday.day = 12;
    my_family.birthday.month = 2;
    my_family.birthday.year = 2023;
    printf("My name is %s and my birthday is %d/%d/%d.\n", my_family.name, my_family.birthday.day, my_family.birthday.month, my_family.birthday.year);
    return 0;
}