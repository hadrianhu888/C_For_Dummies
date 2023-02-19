/**
 * @file menu.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h>
#include <string.h> 
#include <math.h> 
#include <ctype.h> 

int main(int argc, char **argv); // Function prototype 
char ask(void); // Function prototype 

char ask(void)
{
    char c; 
    printf("Y/N? ");
    scanf("%c", &c);
    c = toupper(c);
    if (c == 'Y')
    {
        return (c);
    } else if (c == 'N')
    {
        return (c);
    } else {
        printf("Invalid input. Please try again. ");
        ask();
    } 
}

int main(int argc, char **argv)
{
    char key;
    printf("Would you like to see the menu?");
    key = ask();
    if (key == 'Y') {
        printf("You selected Yes");
    } else {
        printf("You selected No");
    }   
    return 0;
}

