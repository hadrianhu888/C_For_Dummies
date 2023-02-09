/**
 * @file mod100.c
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
#include <time.h> 

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[]) {
    int m, c; 
    for (c = 0; c < 100; c++) {
        m = c % 100; 
        printf("%d) The random number is %d\n\n",c+1, m);
    }
    return 0;
}

// Path: ex16\mod100.c