/**
 * @file oz.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>

#define LINE_LENGTH 35

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[]) {
    char actor[] = "Judy Garland";
    char role[] = "Dorothy";
    int age = 17; 
    char city[] = "Kansas";
    int line; 

    puts("Wizard of Oz Database\n\n"); 

    /**
     * @brief Draw the table heading
     * 
     */
    printf("%-20s %-20s %-20s %-20s", "Actor", "Role", "Age", "City");
    puts("\n");
    for(line=0; line<LINE_LENGTH; line++) {
        putchar('-');
    }
    /**
     * @brief Display the table data
     * 
     */
    puts("\n\n");
    printf("%-20s %-20s %-20d %-20s", actor, role, age, city);
    return 0;
}