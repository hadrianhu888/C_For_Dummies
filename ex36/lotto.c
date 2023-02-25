/**
 * @file lotto.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "lotto.h"

int ball[BALLS];

void init(void)
{
    int i;
    for (i = 0; i < BALLS; i++)
    {
        ball[i] = 0;
    }
}

void select(void)
{
    int i;
    for (i = 0; i < BALLS; i++)
    {
        ball[i] = rand() % RANGE + 1;
    }
}

void sort(void)
{
    int i, j, temp;
    for (i = 0; i < BALLS; i++)
    {
        for (j = i + 1; j < BALLS; j++)
        {
            if (ball[i] > ball[j])
            {
                temp = ball[i];
                ball[i] = ball[j];
                ball[j] = temp;
            }
        }
    }
}

void display(void)
{
    int i;
    for (i = 0; i < BALLS; i++)
    {
        printf("%d ", ball[i]);
    }
    printf("%d\n", ball[0]);
}

