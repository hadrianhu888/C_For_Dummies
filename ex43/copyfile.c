/**
 * @file copyfile.c
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
int copy_files(char *source, char *destination);
int copy_file(char *source, char *destination);
int copy_directory(char *source, char *destination);
int copy_directory_contents(char *source, char *destination);
int move_directory(char *source, char *destination);
int move_directory_contents(char *source, char *destination);
int delete_directory(char *source);
int delete_directory_contents(char *source);
int delete_file(char *source);
int delete_files(char *source);
int move_file(char *source, char *destination);
int move_files(char *source, char *destination);

int return_error_cases(void)
{
    printf("Usage: copyfile [-m] [-d] source destination");
    return 0;
    switch(errno):
    {
        case EACCES:
            printf("Permission denied");
            break;
        case EEXIST:
            printf("File already exists");
            break;
        case EISDIR:
            printf("Is a directory");
            break;
        case ENOENT:
            printf("No such file or directory");
            break;
        case ENOTDIR:
            printf("Not a directory");
            break;
        case EROFS:
            printf("Read-only file system");
            break;
        default:
            printf("Unknown error");
            break;
    }
}

int copy_files(char *source, char *destination)
{
    /**
     * @brief copy files from source to destination
     * 
     */
    int result = 0;
    struct stat source_stat;
    struct stat destination_stat;
    result = stat(source, &source_stat);
    if(result == -1)
    {
        return_error_cases();
        return result;
    }
    result = stat(destination, &destination_stat);
    if(result == -1)
    {
        return_error_cases();
        return result;
    }
}

void copy_file(char *source, char *destination)
{
    /**
     * @brief copy file from source to destination
     * 
     */
    int result = 0;
    int source_fd = 0;
    int destination_fd = 0;
    char buffer[1024];
    int bytes_read = 0;
    int bytes_written = 0;
    source_fd = open(source, O_RDONLY);
    if(source_fd == -1)
    {
        return_error_cases();
        return result;
    }
    destination_fd = open(destination, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if(destination_fd == -1)
    {
        return_error_cases();
        return result;
    }
    while((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
    {
        bytes_written = write(destination_fd, buffer, bytes_read);
        if(bytes_written != bytes_read)
        {
            return_error_cases();
            return result;
        }
    }
    close(source_fd);
    close(destination_fd);
} 

void copy_directory(char *source, char *destination)
{
    /**
     * @brief copy directory from source to destination
     * 
     */
    int result = 0;
    result = mkdir(destination, 0755);
    if(result == -1)
    {
        return_error_cases();
        return result;
    }
    copy_directory_contents(source, destination);
}

void copy_directory_contents(char *source, char *destination)
{
    /**
     * @brief copy directory contents from source to destination
     * 
     */
    int result = 0;
    DIR *source_dir = NULL;
    DIR *destination_dir = NULL;
    struct dirent *source_dirent = NULL;
    struct dirent *destination_dirent = NULL;
    struct stat source_stat;
    struct stat destination_stat;
    source_dir = opendir(source);
    if(source_dir == NULL)
    {
        return_error_cases();
        return result;
    }
    destination_dir = opendir(destination);
    if(destination_dir == NULL)
    {
        return_error_cases();
        return result;
    }
    while((source_dirent = readdir(source_dir)) != NULL)
    {
        if(strcmp(source_dirent->d_name, ".") == 0 || strcmp(source_dirent->d_name, "..") == 0)
        {
            continue;
        }
        result = stat(source_dirent->d_name, &source_stat);
        if(result == -1)
        {
            return_error_cases();
            return result;
        }
        result = stat(destination_dirent->d_name, &destination_stat);
        if(result == -1)
        {
            return_error_cases();
            return result;
        }
        if(S_ISDIR(source_stat.st_mode))
        {
            copy_directory(source_dirent->d_name, destination_dirent->d_name);
        }
        else
        {
            copy_file(source_dirent->d_name, destination_dirent->d_name);
        }
    }
    closedir(source_dir);
    closedir(destination_dir);
}

void move_directory(char *source, char *destination)
{
    /**
     * @brief move directory from source to destination
     * 
     */
    int result = 0;
    result = rename(source, destination);
    if(result == -1)
    {
        return_error_cases();
        return result;
    }
}

void move_directory_contents(char *source, char *destination)
{
    /**
     * @brief move directory contents from source to destination
     * 
     */
    int result = 0;
    DIR *source_dir = NULL;
    DIR *destination_dir = NULL;
    struct dirent *source_dirent = NULL;
    struct dirent *destination_dirent = NULL;
    struct stat source_stat;
    struct stat destination_stat;
    source_dir = opendir(source);
    if(source_dir == NULL)
    {
        return_error_cases();
        return result;
    }
    destination_dir = opendir(destination);
    if(destination_dir == NULL)
    {
        return_error_cases();
        return result;
    }
    while((source_dirent = readdir(source_dir)) != NULL)
    {
        if(strcmp(source_dirent->d_name, ".") == 0 || strcmp(source_dirent->d_name, "..") == 0)
        {
            continue;
        }
        result = stat(source_dirent->d_name, &source_stat);
        if(result == -1)
        {
            return_error_cases();
            return result;
        }
        result = stat(destination_dirent->d_name, &destination_stat);
        if(result == -1)
        {
            return_error_cases();
            return result;
        }
        if(S_ISDIR(source_stat.st_mode))
        {
            move_directory(source_dirent->d_name, destination_dirent->d_name);
        }
        else
        {
            move_file(source_dirent->d_name, destination_dirent->d_name);
        }
    }
    closedir(source_dir);
    closedir(destination_dir);
}

void move_file(char *source, char *destination)
{
    /**
     * @brief move file from source to destination
     * 
     */
    int result = 0;
    result = rename(source, destination);
    if(result == -1)
    {
        return_error_cases();
        return result;
    }
}

void return_error_cases()
{
    /**
     * @brief return error cases
     * 
     */
    switch(errno)
    {
        case EACCES:
            printf("Permission denied");
            break;
        case EEXIST:
            printf("File already exists");
            break;
        case EISDIR:
            printf("Is a directory");
            break;
        case ENOENT:
            printf("No such file or directory");
            break;
        case ENOTDIR:
            printf("Not a directory");
            break;
        default:
            printf("Unknown error");
            break;
    }
}

int main(int argc, char *argv[])
{
    /**
     * @brief main function
     * 
     */
    int result = 0;
    if(argc != 3)
    {
        printf("Usage: %s source destination", argv[0]);
        return result;
    }
    struct stat source_stat;
    struct stat destination_stat;
    result = stat(argv[1], &source_stat);
    if(result == -1)
    {
        return_error_cases();
        return result;
    }
    result = stat(argv[2], &destination_stat);
    if(result == -1)
    {
        return_error_cases();
        return result;
    }
    if(S_ISDIR(source_stat.st_mode))
    {
        if(S_ISDIR(destination_stat.st_mode))
        {
            move_directory_contents(argv[1], argv[2]);
        }
        else
        {
            move_directory(argv[1], argv[2]);
        }
    }
    else
    {
        if(S_ISDIR(destination_stat.st_mode))
        {
            move_file(argv[1], argv[2]);
        }
        else
        {
            move_file(argv[1], argv[2]);
        }
    }
    return result;
}

/**
 * @brief outputs the following:
    move
    Usage: ./move source destination
    move file
    move directory
    move directory contents
    move file
    move directory
    move directory contents
    move file
    move directory
    move directory contents
 * 
 */