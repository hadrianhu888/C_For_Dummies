/**
 * @file today.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[])
{
    char *wdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char *days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    char *s;
    time_t t;
    struct tm *tm;
    int i;
    time(&t);
    t = localtime(&t);
    printf("localtime: %s\n", asctime(localtime(&t)));
    time_t now = time(NULL);
    struct tm *today = localtime(&now);
    printf("Today is %d-%d-%d\n", today->tm_year + 1900, today->tm_mon + 1, today->tm_mday);
    return 0;
}

