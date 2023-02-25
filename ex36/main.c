/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "lotto.h"
#include "lotto.c"

int ball [BALLS];

int main(int argc,char  **argv); 

int main(int argc,char  **argv)
{
    init(); 
    select();
    sort();
    display();
    return 0;
}
