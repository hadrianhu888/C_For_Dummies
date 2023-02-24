/**
 * @file array.c
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

void showArray(int array[]); 
void show_Array(int *array);
void modArray(int *array, int size); 
int main(int argc, char **argv); // main function prototype

void modArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = i;
    }
}

void showArray(int array[])
{
    int array_size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < array_size; i++)
    {
        printf("%d\n", array[i]);
    }
}

void show_Array(int *array)
{
    int array_size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < array_size; i++)
    {
        printf("%d\n", array[i]);
    }
}

int main(int argc, char **argv)
{
    int array[5] = {1, 2, 3, 4, 5};
    showArray(array);
    show_Array(array);
    modArray(array, 5);
    return 0;
}