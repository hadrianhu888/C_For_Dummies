/**
 * @file sponsor.c    
 * @author Hadrian Hu (hadrian.hu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

#define SPACE printf("\n\n");

int main (int argc, char ** argv); // function prototype

int main(int argc, char **argv) {
    char p = 'P';
    char * P_quoted = "'P'";
    printf("\n\nThis program is sponsored by the letter %c", p); 
    printf("\n\nThis program is sponsored by the letter %s", P_quoted);
    printf("\n\nThis program is sponsored by the letter %c%c%c", '\'','P','\'');
    SPACE; 
    return 0;
}
