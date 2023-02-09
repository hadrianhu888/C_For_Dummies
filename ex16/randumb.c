/**
 * @file randumb.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[]) {
    long int hat; 
    hat = rand(); 
    printf("The random number is %ld\n\n", hat);
    return 0;
}

