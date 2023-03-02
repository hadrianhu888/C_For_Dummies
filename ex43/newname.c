/**
 * @file newname.c
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

int main(int argc,char **argv);
int return_error_cases(void);

int return_error_cases(void)
{
    switch(errno)
    {
        case EACCES:
            printf("EACCES: Permission denied");
            break;
        case EBUSY:
            printf("EBUSY: The file is in use by the system or another process");
            break;
        case EFAULT:
            printf("EFAULT: Oldpath points outside your accessible address space");
            break;
        case EIO:
            printf("EIO: An I/O error occurred");
            break;
        case ELOOP:
            printf("ELOOP: Too many symbolic links were encountered in resolving oldpath");
            break;
        case ENAMETOOLONG:
            printf("ENAMETOOLONG: oldpath is too long");
            break;
        case ENOENT:
            printf("ENOENT: A component of oldpath does not exist, or oldpath is an empty string");
            break;
        case ENOMEM:
            printf("ENOMEM: Insufficient kernel memory was available");
            break;
        case ENOTDIR:
            printf("ENOTDIR: A component of the path prefix of oldpath is not a directory");
            break;
        case EPERM:
            printf("EPERM: The filesystem containing oldpath does not support renaming");
            break;
        case EROFS:
            printf("EROFS: oldpath is on a read-only filesystem");
            break;
        case EXDEV:
            printf("EXDEV: oldpath and newpath are not on the same mounted filesystem");
            break;
        default:
            printf("Unknown error");
            break;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int x;
    x = rename("test_file.txt","test_file.csv");
    if(x == 0)
    {
        printf("File renamed successfully\n");
    }
    else
    {
        printf("Error\n");
    }
    return_error_cases();
    int y;
    y =unlink("test_file.csv");
    if(y == 0)
    {
        printf("File deleted successfully\n");
    }
    else
    {
        printf("Error\n");
    }
    return_error_cases();
    return 0;
}

