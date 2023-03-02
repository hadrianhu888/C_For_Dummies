/**
 * @file doubly_linked_list.c
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

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;

node *first_item;
node *current_item;
node *last_item;

typedef struct doubly_linked_list
{
    node *first_item;
    node *current_item;
    node *last_item;
} doubly_linked_list;

doubly_linked_list *list;

void add_item(int data);
void print_list(void);
void delete_item(int data);
void delete_all_items(void);
node *find_item(int data);
void update_item(int data,int new_data);
node *list_all(void);
void modify_item(void);
int main(int argc,char **argv);

void add_item(int data)
{
    /**
     * @brief add item to list
     * 
     * @param data 
     */
    node *new_item = (node *)malloc(sizeof(node));
    new_item->data = data;
    new_item->next = NULL;
    new_item->prev = NULL;
    if (list->first_item == NULL)
    {
        list->first_item = new_item;
        list->last_item = new_item;
        list->current_item = new_item;
    }
    else
    {
        list->last_item->next = new_item;
        new_item->prev = list->last_item;
        list->last_item = new_item;
    }
}

void print_list(void)
{
    /**
     * @brief print list
     * 
     */
    node *current_item = list->first_item;
    while (current_item != NULL)
    {
        printf("%d\n",current_item->data);
        current_item = current_item->next;
    }
}

void delete_item(int data)
{
    /**
     * @brief delete item from list
     * 
     * @param data 
     */
    node *current_item = list->first_item;
    while (current_item != NULL)
    {
        if (current_item->data == data)
        {
            if (current_item->prev != NULL)
            {
                current_item->prev->next = current_item->next;
            }
            else
            {
                list->first_item = current_item->next;
            }
            if (current_item->next != NULL)
            {
                current_item->next->prev = current_item->prev;
            }
            else
            {
                list->last_item = current_item->prev;
            }
            free(current_item);
            break;
        }
        current_item = current_item->next;
    }
}


void delete_all_items(void)
{
    /**
     * @brief delete all items from list
     * 
     */
    node *current_item = list->first_item;
    while (current_item != NULL)
    {
        node *next_item = current_item->next;
        free(current_item);
        current_item = next_item;
    }
    list->first_item = NULL;
    list->last_item = NULL;
    list->current_item = NULL;
}

node *find_item(int data)
{
    /**
     * @brief find item in list
     * 
     * @param data 
     * @return node* 
     */
    node *current_item = list->first_item;
    while (current_item != NULL)
    {
        if (current_item->data == data)
        {
            return current_item;
        }
        current_item = current_item->next;
    }
    return NULL;
}

void update_item(int data,int new_data)
{
    /**
     * @brief update item in list
     * 
     * @param data 
     * @param new_data 
     */
    node *current_item = list->first_item;
    while (current_item != NULL)
    {
        if (current_item->data == data)
        {
            current_item->data = new_data;
            break;
        }
        current_item = current_item->next;
    }
}

node *list_all(void)
{
    /**
     * @brief list all items in list
     * 
     * @return node* 
     */
    return list->first_item;
}

void modify_item(void)
{
    /**
     * @brief modify item in list
     * 
     */
    node *current_item = list->first_item;
    while (current_item != NULL)
    {
        current_item->data = current_item->data * 2;
        current_item = current_item->next;
    }
}

int main(int argc,char **argv)
{
    list = (doubly_linked_list *)malloc(sizeof(doubly_linked_list));
    list->first_item = NULL;
    list->last_item = NULL;
    list->current_item = NULL;
    add_item(1);
    add_item(2);
    add_item(3);
    add_item(4);
    add_item(5);
    add_item(6);
    add_item(7);
    add_item(8);
    add_item(9);
    add_item(10);
    print_list();
    printf("\n");
    delete_item(5);
    print_list();
    printf("\n");
    delete_all_items();
    print_list();
    printf("\n");
    add_item(1);
    add_item(2);
    add_item(3);
    add_item(4);
    print_list();
    modify_item();
    print_list();
    printf("\n");
    return 0;
}



