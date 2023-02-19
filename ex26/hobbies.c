/**
 * @file hobbies.c
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
#include <ctype.h> 
#include <string.h> 

typedef struct person 
{
    char name[50];
    int age; 
    union{
        struct 
        {
            char game[50];
            int jersey_number;
        } sports; 
        struct 
        {
            char instrument[50];
            int years_playing;
        } music; 
        struct 
        {
            int hours_week; 
            int years;
        }television;
    } hobby; 
} person;

int main(int argc, char **argv); // Function prototype

int main(int argc, char **argv) 
{
    person a; 
    person b; 
    person c; 
    a.hobby.sports.jersey_number = 1;
    b.hobby.sports.jersey_number = 2;
    c.hobby.sports.jersey_number = 3;
    strcpy(a.name, "John");
    strcpy(b.name, "Paul");
    strcpy(c.name, "George");
    a.age = 25;
    b.age = 26;
    c.age = 27;
    a.hobby.music.years_playing = 1;
    b.hobby.music.years_playing = 2;
    c.hobby.music.years_playing = 3;
    strcpy(a.hobby.music.instrument, "Guitar");
    strcpy(b.hobby.music.instrument, "Bass");
    strcpy(c.hobby.music.instrument, "Piano");
    a.hobby.television.hours_week = 1;
    b.hobby.television.hours_week = 2;
    c.hobby.television.hours_week = 3;
    a.hobby.television.years = 1;
    b.hobby.television.years = 2;
    c.hobby.television.years = 3;
    a.hobby.sports.game[0] = 'X';
    b.hobby.sports.game[0] = 'O';
    c.hobby.sports.game[0] = 'X';
    a.hobby.sports.jersey_number = 4;
    b.hobby.sports.jersey_number = 5;
    c.hobby.sports.jersey_number = 6;
    // Print out the results
    printf("%s\n", a.name);
    printf("%s\n", b.name);
    printf("%s\n", c.name);
    printf("%d\n", a.age);
    printf("%d\n", b.age);
    printf("%d\n", c.age);
    printf("%d\n", a.hobby.music.years_playing);
    printf("%d\n", b.hobby.music.years_playing);
    printf("%d\n", c.hobby.music.years_playing);
    printf("%d\n", a.hobby.television.hours_week);
    printf("%d\n", b.hobby.television.hours_week);
    printf("%d\n", c.hobby.television.hours_week);
    return 0;
}
