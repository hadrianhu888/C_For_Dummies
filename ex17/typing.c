/**
 * @file typing.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>  
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[]) {
    char ch;
    puts("Press ~ and Enter to stop.");
    while ((ch = getchar()) != '~') {
        putchar(ch);
    }
    return 0;
}

// Path: ex17\typing.c
