/**
 * @file fileinfo.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @brief grab file information using stat()
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>

int main(int argc, char **argv); 

int show_stat_info(char *fname, struct stat *buf)
{
    printf("    mode: %o\n\n", buf->st_mode);
    printf("    links: %d\n\n", buf->st_nlink);
}

int main(int argc, char *argv[])
{
    struct stat info;
    if (stat(argv[1], &info) == -1)
    {
        perror(argv[1]);
        exit(1);
    }
    show_stat_info(argv[1], &info);
    return 0;
}