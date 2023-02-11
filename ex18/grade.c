/**
 * @file grade.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv) {
    int grade; 
    printf("Enter your grade: ");
    scanf("%d", &grade);
    printf("The computer says that your grade is: ");
    printf("%s\n\n", grade >= 60 ? "Pass" : "Fail"); 
    return 0;
}