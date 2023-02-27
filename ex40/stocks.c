/**
 * @file stocks.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <errno.h> 

#define FALSE 0
#define TRUE !FALSE

void write_info(void);
void read_info(void); 

typedef struct stock
{
    char symbol[5];
    float price;
    int shares;
}stock;

void write_info(void)
{
    FILE *stocks;
    stock s;
    int done = FALSE;
    while(!done)
    {
        printf("Enter stock symbol: ");
        scanf("%s",s.symbol);
        if(strcmp(s.symbol,"done") == 0)
        {
            done = TRUE;
        }
        else
        {
            printf("Enter price: ");
            scanf("%f",&s.price);
            printf("Enter shares: ");
            scanf("%d",&s.shares);
            stocks = fopen("stocks.dat","a");
            if(!stocks)
            {
                printf("Error opening file %s\n","stocks.dat");
            }
            else
            {
                fwrite(&s,sizeof(stock),1,stocks);
                fclose(stocks);
            }
        }
    }
}

void read_info(void)
{
    FILE *stocks;
    stock s;
    stocks = fopen("stocks.dat","r");
    if(!stocks)
    {
        printf("Error opening file %s\n","stocks.dat");
    }
    else
    {
        while(fread(&s,sizeof(stock),1,stocks) == 1)
        {
            printf("%s %f %d\n\n",s.symbol,s.price,s.shares);
        }
    }
}

int main(int argc,char **argv);

int main(int argc,char **argv)
{
    write_info();
    read_info();
    return 0;
}