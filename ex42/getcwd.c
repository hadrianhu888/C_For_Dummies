/**
 * @file getcwd.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief get current working directory 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
#include <windows.h>
#include <time.h>
#include <unistd.h> 

int main(int argc, char **argv);

int main(int argc, char *argv[])
{
    char *cwd;
    cwd = getcwd(NULL, 0);
    if (cwd == NULL)
    {
        perror("getcwd");
        exit(1);
    }
    printf("Current working directory: %s\n", cwd);
    return 0;
}
