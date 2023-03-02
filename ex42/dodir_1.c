/**
 * @file dodir_1.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-01
 * 
 * @copyright Copyright (c) 2023
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
#include <math.h>
#include <errno.h>
#include <limits.h>
#include <complex.h> 
#include <dirent.h>

void dir(char *path);
int main(int argc, char **argv);

int main(int argc, char *argv[])
{
    char *path = "C:\\Users\\user\\Documents\\C\\ex42";
    dir(path);
    return 0;
}

void dir(char *path)
{
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir(path)) != NULL)
    {
        while ((ent = readdir(dir)) != NULL)
        {
            printf("%s\n", ent->d_name);
        }
        closedir(dir);
        if(S_ISDIR(sbuf.st_mode))
        {
            printf("This is a directory\n");
            if(strcmp(drecord->d_name, ".") == 0 || strcmp(drecord->d_name, "..") == 0)
            {
                continue;
            }
            else
            {
                char *newpath = malloc(strlen(path) + strlen(drecord->d_name) + 2);
                sprintf(newpath, "%s/%s", path, drecord->d_name);
                dir(newpath);
                free(newpath);
            }
        }
    }
    else
    {
        perror("Could not open directory");
    }
}

// Path: ex42\ex42.c