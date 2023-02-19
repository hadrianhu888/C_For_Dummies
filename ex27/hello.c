/**
 * @file hello.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]); // Function prototype

int main(int argc, char *argv[]) {
    char array[] = "hello";
    char *a;
    char *b;

    printf("%s\n", array);
    a = array;
    b = &a;
    printf("%s\n", a);
    printf("%s\n", b);
    //print the array with a for loop
    for (int i = 0; i < 10; i++) {
        printf("%c ", array[i]);
    }
    return 0;
}

