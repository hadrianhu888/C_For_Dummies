/**
 * @file grid.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[]) {
    int c = 0;
    char a = 'a';
    char b = 'b';
    while (a <= 'z') {
        while (b <= 'z') {
            printf("%c%c\t", a, b);
            b++;
        }
        a++;
        b = 'a';
    }
    return 0;
}

// Path: ex17\grid.c