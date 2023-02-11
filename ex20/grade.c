/**
 * @file grade.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>
#include <assert.h>

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    int student; 
    puts("Class Grades:\n\n");
    for (student = 0; student < 5; student++) {
        printf("Student %d: %c\n", student, grades[student]);
    }
    return 0;
}

