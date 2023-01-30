/**
 * @file subjects.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char ** argv); // function prototype

int main(int argc, char **argv) {
    char subnames[32];
    int iq;
    float wages;
    printf("Enter your favorite subject: ");
    scanf("%s", subnames);
    printf("Enter your IQ: ");
    scanf("%d", &iq);
    printf("Enter your wages: ");
    scanf("%f", &wages);
    printf("Subject: %s\tIQ: %d\tWages: %f\n\n", subnames, iq, wages);
    return 0;
}
