/**
 * @file oddlit.c
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

int main(int argc, char *argv[]); // Function prototype

int main(int argc, char *argv[])
{
    char c; 
    short int i; 
    long x; 
    float f; 
    double d; 
    double temp; 
    char temp_c[8];
    printf("Char variable c is %d bytes long", sizeof(c)); 
    printf("\n");
    printf("Short int variable i is %d bytes long", sizeof(i));
    printf("\n");
    printf("Long int variable x is %ld bytes long",sizeof(x));
    printf("\n");
    printf("Float variable f is %f bytes long", sizeof(f));
    printf("\n");
    printf("Double variable d is %lf bytes long", sizeof(d));
    printf("\n");
    printf("Enter your choice: ");
    scanf("%c", &c);
    printf("Enter a short int: ");
    scanf("%d", &i);
    printf("Enter a long int: ");
    scanf("%ld", &x);
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a double: ");
    scanf("%lf", &d);
    printf("You entered %c, %d, %ld, %f, %lf", c, i, x, f, d);
    //get temp variable length using sizeof function
    temp = d; 
    temp = sizeof(temp);
    //print temp variable length
    printf("\n");
    printf("sizeof(temp) is %d bytes long", temp);
    printf("\n");
    // get the addresses of each of the variables with pointers 
    short int *s1 = (short int *) &i;
    long *l1 = (long *) &x;
    float *f1 = (float *) &f;
    double *d1 = (double *) &d;
    //print the addresses of the variables
    printf("\n");
    printf("i is %d bytes long", &i);
    printf("\n");
    printf("x is %ld bytes long", x);
    printf("\n");
    printf("f is %f bytes long", f);
    printf("\n");
    printf("d is %lf bytes long", d);
    printf("\n");
    printf("temp is %ld bytes long", temp);
    printf("\n");
    //print the addresses of the variables
    printf("\n");
    printf("s1 is %d bytes long", *s1);
    // show the length and address of temp_c
    // use a loop to print the address of temp_c
    for(int i = 0; i < temp; i++)
    {
        printf("\n");
        printf("temp_c[%d] is %d bytes long", i, temp_c[i]);
    }
    // use %p to print the address of each variable 
    for(int i = 0; i < temp; i++)
    {
        printf("\n");
        printf("temp_c[%p] is %p bytes long", i, temp_c[i]);
    }
    char key; 
    int start, end; 
    float seat_cushion; 
    char *key_ptr; 
    int *start_ptr, *end_ptr; 
    float *seat_cushion_ptr;
    *key_ptr = key;
    *start_ptr = start;
    *end_ptr = end;
    *seat_cushion_ptr = seat_cushion;
    //print the above pointer information 
    printf("\n");
    printf("key is %c, start is %d, end is %d, seat_cushion is %f", key_ptr, start_ptr, end_ptr, seat_cushion_ptr);
    printf("\n");
    return 0;
}