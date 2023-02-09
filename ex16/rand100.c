/**
 * @file rand100.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief Displays 100 random numbers using rand. 
 * Use an array 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

long int size = 100; 

int main(int argc, char *argv[]); // function prototype
int * rand_array(int *array, int size); // function prototype

int * rand_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand();

        /**
         * @brief print the array
         * 
         */
        printf("%d) The random number is %d\n\n",i+1, array[i]);
    }    
    return array;
}

int main(int argc, char *argv[]) {
    int array[size]; 
    rand_array(array, size);
    return 0;
}