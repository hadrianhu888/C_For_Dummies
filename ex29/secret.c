/**
 * @file secret.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <math.h>

int main(int argc, char **argv); // Function prototype

int main(int argc, char **argv)
{
    char input[64];
    int len, x; 
    printf("Enter tonight's pass phrase: "); 
    scanf("%s", input);
    len = strlen(input);
    for (x = 0; x < len; x++) {
        input[x] = 0x7F ^ input[x];
    }
    for (x = 0; x < len; x++) {
        printf("%c", input[x]);
    }
    printf("Press Enter to see the text recovered: ");
    getchar();
    for (x = 0; x < len; x++) {
        input[x] = 0x7F ^ input[x];
    }
    for (x = 0; x < len; x++) {
        printf("%c", input[x]);
    }
    printf("The pass phrase is: %s", input);
    return 0;
}