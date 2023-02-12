/**
 * @file march.c
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

struct month {
    char name[10];
    char abbrev[4];
    int days;
    int number;
};

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[]) {
    struct month march;
    strcpy(march.name, "March");
    strcpy(march.abbrev, "Mar");
    march.days = 31;
    march.number = 3;
    printf("The month of %s has %d days and is the %d month of the year.\n", march.name, march.days, march.number);
    return 0;
}