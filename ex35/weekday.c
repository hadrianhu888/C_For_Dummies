/**
 * @file weekday.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv)
{
    char *wdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    struct tm *tm;
    time_t t;
    time(&t);
    tm = localtime(&t);
    printf("%s\n", wdays[tm->tm_wday]);
    char *short_days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    printf("%s\n", short_days[tm->tm_wday]);
    return 0;
}

