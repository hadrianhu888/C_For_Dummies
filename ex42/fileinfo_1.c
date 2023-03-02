/**
 * @file fileinfo_1.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief retrieve  local file information using stat()
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

int main(int argc, char **argv);
int show_stat_info(char *fname, struct stat *buf);

int show_stat_info(char *fname, struct stat *buf)
{
    printf("    mode: %o\n", buf->st_mode);
}

int main(int argc, char *argv[])
{
    struct stat fbuf;
    int x;
    x = stat("fileinfo.c", &fbuf);
    if (x != 0)
    {
        perror("stat");
        exit(1);
    }
    show_stat_info("fileinfo.c", &fbuf);
    printf("Last modified: %s", ctime(&fbuf.st_mtime));
    printf("Last accessed: %s", ctime(&fbuf.st_atime));
    printf("Last changed: %s", ctime(&fbuf.st_ctime));
    printf("File size: %d", fbuf.st_size);
    printf("File inode: %d", fbuf.st_ino);
    return 0;
}