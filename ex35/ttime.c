/**
 * @file ttime.c
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

int main(int argc, char **argv); // function prototype

int main(int argc, char **argv)
{
    char *wdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char *days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    char *s;
    time_t t;
    struct tm *tm;
    int i;
    time(&t);
    tm = localtime(&t);
    printf("localtime: %s\n", asctime(localtime(&t)));
    printf("Today is %s %s %d, %d\n", months[tm->tm_mon], wdays[tm->tm_wday],
            tm->tm_mday, tm->tm_year + 1900);
    s = asctime(gmtime(&t));
    printf("gmtime: %s\n", s);
    s = asctime(localtime(&t));
    printf("asctime: %s\n", s);
    s = asctime(gmtime(&t));
    printf("ctime: %s\n", s);
    s = asctime(localtime(&t));
    printf("ctime: %s\n", s);
    s = asctime(gmtime(&t));
    printf("asctime: %s\n", s);
    s = asctime(localtime(&t));
    printf("asctime: %s\n", s);
    //display today's date in mm/dd/yyyy format
    printf("Today is %s %s %d, %d\n", months[tm->tm_mon], wdays[tm->tm_wday],
            tm->tm_mday, tm->tm_year + 1900);
    return 0;
}
