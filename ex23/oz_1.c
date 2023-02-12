/**
 * @file oz_1.c
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

#define LINE_LENGTH 128

int main(int argc, char *argv[]); // function prototype

/**
 * @brief Displays the actors in a database format
 * 
 */

char actor1[] = "Judy Garland";
char role1[] = "Dorothy";
int age1 = 17;
char city1[] = "Kansas";

char actor2[] = "Frank Morgan";
char role2[] = "The Wizard";
int age2 = 45;
char city2[] = "Oz";

char actor3[] = "Ray Bolger";
char role3[] = "Scarecrow";
int age3 = 25;
char city3[] = "Oz";

char actor4[] = "Bert Lahr";
char role4[] = "Cowardly Lion";
int age4 = 35;
char city4[] = "Oz";

char actor5[] = "Jack Haley";
char role5[] = "Oz";
int age5 = 35;
char city5[] = "Oz";

int main(int argc, char *argv[]) {
    int line;

    puts("Wizard of Oz Database\n\n");

    /**
     * @brief Draw the table heading
     * 
     */
    printf("%-20s %-20s %-20s %-20s", "Actor", "Role", "Age", "City");
    puts("\n");
    for (line = 0; line < LINE_LENGTH; line++) {
        putchar('-');
    }
    /**
     * @brief Display the table data
     * 
     */
    puts("\n\n");
    printf("%-20s %-20s %-20d %-20s", actor1, role1, age1, city1);
    puts("\n");
    printf("%-20s %-20s %-20d %-20s", actor2, role2, age2, city2);
    puts("\n");
    printf("%-20s %-20s %-20d %-20s", actor3, role3, age3, city3);
    puts("\n");
    printf("%-20s %-20s %-20d %-20s", actor4, role4, age4, city4);
    puts("\n");
    printf("%-20s %-20s %-20d %-20s", actor5, role5, age5, city5);
    return 0;
}