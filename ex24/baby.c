/**
 * @file baby.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main(int argc, char *argv[]); // function prototype
float baby(float food); // function prototype

float baby(float food) {
    float weight = 0.0;
    weight = food * 0.1;
    return weight;
}

int main(int argc, char *argv[]) {
    float food = 0.0;
    float weight = 0.0;
    printf("How much food did you give the baby? ");
    scanf_s("%f", &food);
    weight = baby(food);
    printf("The baby weighs %f pounds.\n", weight);
    return 0;
}

