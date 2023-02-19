/**
 * @file menu_1.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <ctype.h> 

char ask(void); // Function prototype
int main(int argc, char **argv); // Function prototype

char ask(void) 
{
    char key; 
    printf("Do you want to quit before you see the mneu? "); 
    scanf("%c", &key);
    key = toupper(key);
    if (key == 'Y')
    {
        return (key);
    } else if (key == 'N')
    {
        return (key);
    } else {
        printf("Invalid input. Please try again. ");
        ask();
    }    
}

int main(int argc, char **argv)
{
    char key;
    key = ask();
    if (key == 'Y') {
        printf("You selected Yes");
    } else {
        printf("You selected No");
    }   
    return 0;
}

