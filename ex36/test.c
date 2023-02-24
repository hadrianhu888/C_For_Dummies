/**
 * @file test.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "alpha.c"
#include "beta.c"
#include "gamma.c"


int main_test(int argc, char *argv[]); // function prototype

int main_test(int argc, char *argv[])
{
    printf("Hello World!\n");
    a();
    b(); 
    c(); 
    return 0;
}


