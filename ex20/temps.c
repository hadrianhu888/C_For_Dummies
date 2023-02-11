/**
 * @file temps.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief This program allows the user to enter the temperature for five days in a float array and return the average temperature of the five days. 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>
#include <assert.h>

#define SIZE 5

float array[SIZE]; // float array of size 5
float sum = 0; // sum of the array
float mean = 0; // mean of the array
void get_user_input(float array[], int size); // function prototype
void display_user_input(float array[], int size); // function prototype
float get_sum(float array[], int size); // function prototype
float get_average(float array[], int size); // function prototype
int main(int argc, char **argv); // function prototype

void get_user_input(float array[], int size) {
    int i = 0;
    for (i = 0; i < size; i++) {
        printf("Enter the temperature for day %d: ", i + 1);
        scanf("%f", &array[i]);
    }
}

void display_user_input(float array[], int size) {
    int i = 0;
    for (i = 0; i < size; i++) {
        printf("The temperature for day %d is: %f\n", i + 1, array[i]);
    }
}

float get_sum(float array[], int size) {
    int i = 0;
    for (i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

float get_average(float array[], int size) {
    mean = sum / size;
    return mean;
}

int main(int argc, char **argv) {
    get_user_input(array, SIZE);
    display_user_input(array, SIZE);
    get_sum(array, SIZE);
    get_average(array, SIZE);
    printf("The average temperature is: %f\n", mean);
    return 0;
}
