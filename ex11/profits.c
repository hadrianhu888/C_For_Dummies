/**
 * @file profits.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char ** argv); //function prototype

int main(int argc, char **argv) {
    int profits, profits3; 
    int income = 120;
    int expenses = 27; 
    profits = income - expenses;
    profits3 = (income - expenses) * 3;
    printf("The profits are %d\n\n", profits);
    printf("The triple profits are %d\n\n", profits3);
    return 0;
}