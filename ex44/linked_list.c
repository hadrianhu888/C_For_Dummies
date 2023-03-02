/**
 * @file linked_list.c
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
#include <math.h>
#include <errno.h>
#include <limits.h>
#include <complex.h> 
#include <dirent.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef  struct LinkedList
{
    Node *head;
    Node *tail;
    int size;
} LinkedList;

typedef struct DoublyLinkedList
{
    Node *head;
    Node *tail;
    int size;
} DoublyLinkedList;

typedef struct CircularLinkedList
{
    Node *head;
    Node *tail;
    int size;
} CircularLinkedList;

typedef struct DoublyCircularLinkedList
{
    Node *head;
    Node *tail;
    int size;
} DoublyCircularLinkedList;

typedef struct Stack
{
    Node *head;
    Node *tail;
    int size;
} Stack;

typedef struct Queue
{
    Node *head;
    Node *tail;
    int size;
} Queue;

typedef struct Deque
{
    Node *head;
    Node *tail;
    int size;
} Deque;

typedef struct PriorityQueue
{
    Node *head;
    Node *tail;
    int size;
} PriorityQueue;

typedef struct BinarySearchTree
{
    Node *head;
    Node *tail;
    int size;
} BinarySearchTree;

typedef struct AVLTree
{
    Node *head;
    Node *tail;
    int size;
} AVLTree;

typedef struct RedBlackTree
{
    Node *head;
    Node *tail;
    int size;
} RedBlackTree;

typedef struct SplayTree
{
    Node *head;
    Node *tail;
    int size;
} SplayTree;

typedef struct BTree
{
    Node *head;
    Node *tail;
    int size;
} BTree;

typedef struct BPlusTree
{
    Node *head;
    Node *tail;
    int size;
} BPlusTree;

typedef struct BStarTree
{
    Node *head;
    Node *tail;
    int size;
} BStarTree;

/**
 * @brief add head or tail to the list
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc,char **argv);
LinkedList *add_head(LinkedList *list, int data);
LinkedList *add_tail(LinkedList *list, int data);
LinkedList *add_data(LinkedList *list, int data);
LinkedList *remove_head(LinkedList *list);
LinkedList *remove_tail(LinkedList *list);
LinkedList *remove_data(LinkedList *list, int data);
LinkedList *move_head(LinkedList *list);
LinkedList *move_tail(LinkedList *list);
LinkedList *move_data(LinkedList *list, int data);
LinkedList *swap_head(LinkedList *list);
LinkedList *swap_tail(LinkedList *list);
LinkedList *swap_data(LinkedList *list, int data);
LinkedList *reverse_list(LinkedList *list);
LinkedList *sort_list(LinkedList *list);
LinkedList *merge_list(LinkedList *list1, LinkedList *list2);
LinkedList *split_list(LinkedList *list, int data);
LinkedList *delete_list(LinkedList *list);
LinkedList *copy_list(LinkedList *list);
LinkedList *clone_list(LinkedList *list, LinkedList *list2);
LinkedList *clear_list(LinkedList *list);
LinkedList *search_list(LinkedList *list, int data);
LinkedList *print_list(LinkedList *list);
LinkedList *create_list(void);
LinkedList *destroy_list(LinkedList *list);
LinkedList *list_length(LinkedList *list);
LinkedList *list_empty(LinkedList *list);
LinkedList *list_full(LinkedList *list);
LinkedList *list_head(LinkedList *list);
LinkedList *list_tail(LinkedList *list);
LinkedList *list_data(LinkedList *list, int data);

LinkedList *add_head(LinkedList *list, int data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    if (list->head == NULL)
    {
        list->head = new_node;
        list->tail = new_node;
    }
    else
    {
        new_node->next = list->head;
        list->head = new_node;
    }
    list->size++;
    return list;
}

LinkedList *add_tail(LinkedList *list, int data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    if (list->head == NULL)
    {
        list->head = new_node;
        list->tail = new_node;
    }
    else
    {
        list->tail->next = new_node;
        list->tail = new_node;
    }
    list->size++;
    return list;
}

LinkedList *add_data(LinkedList *list, int data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    if (list->head == NULL)
    {
        list->head = new_node;
        list->tail = new_node;
    }
    else
    {
        Node *temp = list->head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        list->tail = new_node;
    }
    list->size++;
    return list;
}

LinkedList *remove_head(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        list->head = list->head->next;
        free(temp);
        list->size--;
        return list;
    }
}

LinkedList *remove_tail(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        while (temp->next != list->tail)
        {
            temp = temp->next;
        }
        free(list->tail);
        temp->next = NULL;
        list->tail = temp;
        list->size--;
        return list;
    }
}

LinkedList *remove_data(LinkedList *list, int data)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        while (temp->next->data != data)
        {
            temp = temp->next;
        }
        Node *temp2 = temp->next;
        temp->next = temp->next->next;
        free(temp2);
        list->size--;
        return list;
    }
}

LinkedList *move_head(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        list->head = list->head->next;
        list->tail->next = temp;
        list->tail = temp;
        temp->next = NULL;
        return list;
    }
}

LinkedList *move_tail(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        while (temp->next != list->tail)
        {
            temp = temp->next;
        }
        list->tail->next = list->head;
        list->head = list->tail;
        list->tail = temp;
        temp->next = NULL;
        return list;
    }
}

LinkedList *move_data(LinkedList *list, int data)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        while (temp->next->data != data)
        {
            temp = temp->next;
        }
        Node *temp2 = temp->next;
        temp->next = temp->next->next;
        list->tail->next = temp2;
        list->tail = temp2;
        temp2->next = NULL;
        return list;
    }
}

LinkedList *swap_head(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        list->head = list->head->next;
        temp->next = list->head->next;
        list->head->next = temp;
        return list;
    }
}

LinkedList *swap_tail(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        while (temp->next != list->tail)
        {
            temp = temp->next;
        }
        Node *temp2 = list->tail;
        list->tail = temp;
        temp2->next = list->head;
        list->head = temp2;
        temp->next = NULL;
        return list;
    }
}

LinkedList *swap_data(LinkedList *list, int data)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        while (temp->next->data != data)
        {
            temp = temp->next;
        }
        Node *temp2 = temp->next;
        temp->next = temp->next->next;
        temp2->next = temp->next->next;
        temp->next->next = temp2;
        return list;
    }
}

LinkedList *merge_list(LinkedList *list1, LinkedList *list2)
{
    if (list1->head == NULL)
    {
        printf("List1 is empty");
        return list1;
    }
    else if (list2->head == NULL)
    {
        printf("List2 is empty");
        return list1;
    }
    else
    {
        list1->tail->next = list2->head;
        list1->tail = list2->tail;
        list1->size += list2->size;
        return list1;
    }
}

LinkedList *print_list(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n\nList printed");
    }
}

LinkedList *clear_list(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        while (temp != NULL)
        {
            Node *temp2 = temp;
            temp = temp->next;
            free(temp2);
        }
        list->head = NULL;
        list->tail = NULL;
        list->size = 0;
        return list;
    }
}

LinkedList *clone_list(LinkedList *list1, LinkedList *list2)
{
    if (list1->head == NULL)
    {
        printf("List1 is empty");
        return list2;
    }
    else
    {
        Node *temp = list1->head;
        while (temp != NULL)
        {
            list2 = add_data(list2, temp->data);
            temp = temp->next;
        }
        return list2;
    }
}

LinkedList *reverse_list(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        Node *temp2 = list->head->next;
        while (temp2 != NULL)
        {
            Node *temp3 = temp2->next;
            temp2->next = temp;
            temp = temp2;
            temp2 = temp3;
        }
        list->tail = list->head;
        list->head = temp;
        list->tail->next = NULL;
        return list;
    }
}

LinkedList *sort_list(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        while (temp != NULL)
        {
            Node *temp2 = temp->next;
            while (temp2 != NULL)
            {
                if (temp->data > temp2->data)
                {
                    int temp3 = temp->data;
                    temp->data = temp2->data;
                    temp2->data = temp3;
                }
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
        return list;
    }
}

LinkedList *remove_duplicate(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        while (temp != NULL)
        {
            Node *temp2 = temp;
            while (temp2->next != NULL)
            {
                if (temp->data == temp2->next->data)
                {
                    Node *temp3 = temp2->next;
                    temp2->next = temp2->next->next;
                    free(temp3);
                    list->size--;
                }
                else
                {
                    temp2 = temp2->next;
                }
            }
            temp = temp->next;
        }
        return list;
    }
}

LinkedList *destroy_list(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        while (temp != NULL)
        {
            Node *temp2 = temp;
            temp = temp->next;
            free(temp2);
        }
        list->head = NULL;
        list->tail = NULL;
        list->size = 0;
        free(list);
        return list;
    }
}

LinkedList *list_length(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        printf("Length of list is %d", count);
        return list;
    }
}

LinkedList *list_size(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        printf("Size of list is %d", list->size);
        return list;
    }
}

LinkedList *list_head(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        printf("Head of list is %d", list->head->data);
        return list;
    }
}

LinkedList *list_tail(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        printf("Tail of list is %d", list->tail->data);
        return list;
    }
}

LinkedList *list_data(LinkedList *list, int data)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        while (temp != NULL)
        {
            if (temp->data == data)
            {
                printf("Data %d is present in list", data);
                return list;
            }
            temp = temp->next;
        }
        printf("Data %d is not present in list", data);
        return list;
    }
}

LinkedList *list_index(LinkedList *list, int index)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        int count = 0;
        while (temp != NULL)
        {
            if (count == index)
            {
                printf("Data at index %d is %d", index, temp->data);
                return list;
            }
            count++;
            temp = temp->next;
        }
        printf("Index %d is not present in list", index);
        return list;
    }
}

LinkedList *list_max(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        int max = temp->data;
        while (temp != NULL)
        {
            if (temp->data > max)
            {
                max = temp->data;
            }
            temp = temp->next;
        }
        printf("Maximum data in list is %d", max);
        return list;
    }
}

LinkedList *list_min(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        int min = temp->data;
        while (temp != NULL)
        {
            if (temp->data < min)
            {
                min = temp->data;
            }
            temp = temp->next;
        }
        printf("Minimum data in list is %d", min);
        return list;
    }
}

LinkedList *list_sum(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        int sum = 0;
        while (temp != NULL)
        {
            sum += temp->data;
            temp = temp->next;
        }
        printf("Sum of all data in list is %d", sum);
        return list;
    }
}

LinkedList *list_average(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        int sum = 0;
        int count = 0;
        while (temp != NULL)
        {
            sum += temp->data;
            count++;
            temp = temp->next;
        }
        printf("Average of all data in list is %d", sum / count);
        return list;
    }
}

LinkedList *list_reverse(LinkedList *list)
{
    if (list->head == NULL)
    {
        printf("List is empty");
        return list;
    }
    else
    {
        Node *temp = list->head;
        Node *prev = NULL;
        Node *next = NULL;
        while (temp != NULL)
        {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        list->head = prev;
        return list;
    }
}

LinkedList *create_list(void)
{
    LinkedList *list = (LinkedList *)malloc(sizeof(LinkedList));
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}

int main(int argc,char **argv)
{
    LinkedList *list = create_list();
    list = add_head(list, 1);
    list = add_tail(list,2);
    list =add_data(list,3);
    list = print_list(list);
    return 0;
}