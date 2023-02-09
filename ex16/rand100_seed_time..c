/**
 * @file rand100_seed_time.c
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
#include <time.h> 

long int size = 100; 
long int seed; 

int main(int argc, char *argv[]); // function prototype
int * rand_array(int *array, int size); // function prototype
int * rand_seed(int *array, int size); // function prototype
int get_seed(void); // function prototype

int get_seed(void) {
    //printf("Enter a seed: ");
    //scanf("%ld", &seed);
    //srand(seed);
    srand((unsigned)time(NULL));
    //return seed;
}

int * rand_seed(int *array, int size) {
    srand(seed);
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
    /**
     * @brief Get the seed object
     * 
     */
    get_seed();
    int array[size]; 
    rand_array(array, size);
    return 0;
}