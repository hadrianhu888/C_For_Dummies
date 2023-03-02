/**
 * @file dodir.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief Read this current directory and print out the files
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
#include <dirent.h>
#include <windows.h>
#include <time.h>

int main(int argc, char **argv);

int main(int argc, char *argv[])
{
    DIR *dir;
    struct dirent *entry;
    struct stat fbuf;
    char *fname;
    int x;
    int file_cnt = 0;
    dir = opendir(".");
    if (dir == NULL)
    {
        perror("opendir");
        exit(1);
    }
    while ((entry = readdir(dir)) != NULL)
    {
        fname = entry->d_name;
        x = stat(fname, &fbuf);
        if (x != 0)
        {
            perror("stat");
            exit(1);
        }
        printf("%s\n", fname);
        for (int i = 0; i < argc; i++)
        {
            if (strcmp(fname, argv[i]) == 0)
            {
                printf("Last modified: %s", ctime(&fbuf.st_mtime));
                printf("Last accessed: %s", ctime(&fbuf.st_atime));
                printf("Last changed: %s", ctime(&fbuf.st_ctime));
                printf("File size: %d", fbuf.st_size);
                printf("File inode: %d", fbuf.st_ino);
                file_cnt++;
                printf("Files: %d\n", file_cnt);
            }
        }
    }
    /**
     * @brief Open each file and use stat() to get the file information
     * 
     */
    
    /**
     * @brief print a summary of the files in the directory (number of files,and each file's size) 
    **/
    for (int i = 0; i < argc; i++)
    {
        x = stat(argv[i], &fbuf);
        if (x != 0)
        {
            perror("stat");
            exit(1);
        }
        printf("Last modified: %s", ctime(&fbuf.st_mtime));
        printf("Last accessed: %s", ctime(&fbuf.st_atime));
        printf("Last changed: %s", ctime(&fbuf.st_ctime));
        printf("File size: %d", fbuf.st_size);
        printf("File inode: %d", fbuf.st_ino);
    }
    closedir(dir);
    return 0;
}

// Path: ex42\fileinfo.c