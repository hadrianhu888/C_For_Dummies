/**
 * @file bail.c
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

void spiffy (void); // Function prototype
void animation (void); // Function prototype
void finish(void); // Function prototype
int main(int argc, char **argv); // Function prototype

void finish(void) 
{
    puts("This is what the end of the function looks like.");
    puts("The hard drive for any missing bits...");
}

void spiffy(void) 
{
    puts("This function cleans up the keyboard buffer.");
}

void animation(void)
{
    puts("As a final trick, the Taco Bell dog will dance for you.");
    puts("...Across your monitor with this function.");
}

int main(int argc, char **argv) 
{
    atexit(finish);
    atexit(animation);
    atexit(spiffy);
    puts("Press Enter to begin shutting down this program"); 
    getchar();
    return 0; 
}

