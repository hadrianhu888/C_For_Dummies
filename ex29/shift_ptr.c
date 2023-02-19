/**
 * @file shift_ptr.c
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
    int v,r; 
    printf("Enter an integer value: ");
    scanf("%d", &v);
    r = v >> 2;
    /**print the value of v before r*/
    printf("The value of v is %d", v);
    printf("The value of r is %d", r);
    printf("\n");
    int hex_value = 0xBEC83D7; 
    printf("The value of hex_value is %d", hex_value);
    int base; 
    /**
     * @brief get the base value from the user; 
     * 
     */
    printf("Enter the base value: ");
    scanf("%d", &base);
    /**
     * @brief multiply by ten using << operator
     * 
     */
    base = base << 1; 
    base = base << 2;
    printf("The new base value is: %d\n\n", base);
    /**
     * @brief divide by ten using >> operator
     * 
     */
    base = base >> 1;
    printf("The new base value is: %d\n\n", base);
    
    return 0;
}