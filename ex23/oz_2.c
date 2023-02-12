/**
 * @file oz_2.c
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

#define LINE_LENGTH 80

char actors[5][20] = {"Judy Garland", "Frank Morgan", "Ray Bolger", "Bert Lahr", "Margaret Hamilton"};
char roles[5][20] = {"Dorothy", "The Wizard", "Scarecrow", "Cowardly Lion", "Wicked Witch"};
int ages[5] = {17, 45, 25, 35, 35};
char cities[5][20] = {"Kansas", "Oz", "Oz", "Oz", "Oz"};

int main(int argc, char *argv[]); // function prototype

/**
 * @brief Displays the actors in a database format
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

int main(int argc, char *argv[]) 
{
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
    for (int i = 0; i < 5; i++)
    {
        printf("%-20s %-20s %-20d %-20s", actors[i], roles[i], ages[i], cities[i]);
        puts("\n");
    }
    return 0;
}