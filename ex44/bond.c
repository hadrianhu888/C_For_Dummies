/**
 * @file bond.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-02
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
#include <math.h>
#include <errno.h>
#include <limits.h>
#include <complex.h> 
#include <dirent.h>

typedef struct jb{
    char name[20];
    struct jb *next;
}jb; 
jb *first_item; 
jb *current_item;
jb *last_item;

#define RECORDS 6

int main(int argc,char **argv);

int main(int argc,char **argv){
    char *bonds[RECORDS]={"Sean Connery"," George Lazenby"," Roger Moore"," Timothy Dalton"," Pierce Brosnan"," Daniel Craig"};
    int i;
    first_item = (jb *)malloc(sizeof(jb));
    current_item = first_item;
    for(i=0;i<RECORDS;i++){
        strcpy(current_item->name,bonds[i]);
        if(i<RECORDS-1){
            current_item->next = (jb *)malloc(sizeof(jb));
            current_item = current_item->next;
        }
    }
    current_item->next = NULL;
    last_item = current_item;
    current_item = first_item;
    while(current_item!=NULL){
        printf("%s\n",current_item->name);
        current_item = current_item->next;
    }
    return 0;
}


