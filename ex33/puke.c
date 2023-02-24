/**
 * @file puke.c
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

#define SIZE 5
int ADDRESS = 20;

int main(int argc, char **argv); // main function prototype
void peasoup(int green); // peasoup function prototype
void pea_soup(int *green); // peasoup function prototype
void peas_soup(int ADDRESS); // peasoup function prototype

void peasoup(int green){
    while (green--){
        puts("Blech!\n");
    }
}

void pea_soup(int *green){
    while (*green--){
        puts("Blech!\n");
    }
}

void peas_soup(int ADDRESS){
    while (ADDRESS--){
        puts("Blech!\n");
    }
}

int main(int argc, char **argv) 
{
    int turn; 
    int head; 
    int tail;
    head = 13;
    turn = head; 
    peasoup(turn);
    pea_soup(&turn);
    return 0;
}