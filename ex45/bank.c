/**
 * @file bank.c
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

typedef struct bank_account
{
    char name[20];
    int account_number;
    float balance;
    struct bank_account *next;
} bank_account;

bank_account *first_item;
bank_account *current_item;
bank_account *last_item;\
int account_number;
float balance;
char name[20]; 
int i=0;   

#define RECORDS 100

int main(int argc,char **argv);
bank_account *create_account(char *name,int account_number,float balance);
void add_account(bank_account *new_account);
void print_accounts(void);
void delete_account(int account_number);
void delete_all_accounts(void);
bank_account  *find_account(int account_number);
void update_account(int account_number,float new_balance);
bank_account *list_all(void);
void modify_account(void);

void modify_account(void)
{
    /**
     * @brief modify account 
     * 
     */
    int account_number;
    float new_balance;
    printf("Enter account number: ");
    scanf("%d",&account_number);
    printf("Enter new balance: ");
    scanf("%f",&new_balance);
    update_account(account_number,new_balance);
}

bank_account  *list_all(void)
{
    /**
     * @brief list all accounts 
     * 
     */
    while(current_item!=NULL)
    {
        printf("Name: %s\n",current_item->name);
        printf("Account Number: %d\n",current_item->account_number);
        printf("Balance: %f\n",current_item->balance);
        current_item = current_item->next;
    }
}

bank_account *create_account(char *name,int account_number,float balance){
    bank_account *new_account;
    new_account = (bank_account *)malloc(sizeof(bank_account));
    strcpy(new_account->name,name);
    new_account->account_number = account_number;
    new_account->balance = balance;
    new_account->next = NULL;
    return new_account;
}

void add_account(bank_account *new_account){
    if(first_item==NULL){
        first_item = new_account;
        last_item = new_account;
    }else{
        last_item->next = new_account;
        last_item = new_account;
    }
}

void print_accounts(void){
    current_item = first_item;
    while(current_item!=NULL){
        printf("Name: %s\n",current_item->name);
        printf("Account Number: %d\n",current_item->account_number);
        printf("Balance: %f\n",current_item->balance);
        current_item = current_item->next;
    }
}

void delete_account(int account_number){
    bank_account *previous_item;
    current_item = first_item;
    while(current_item!=NULL){
        if(current_item->account_number==account_number){
            if(current_item==first_item){
                first_item = current_item->next;
            }else{
                previous_item->next = current_item->next;
            }
            free(current_item);
            return;
        }
        previous_item = current_item;
        current_item = current_item->next;
    }
}

void delete_all_accounts(void){
    current_item = first_item;
    while(current_item!=NULL){
        first_item = current_item->next;
        free(current_item);
        current_item = first_item;
    }
}

bank_account  *find_account(int account_number){
    current_item = first_item;
    while(current_item!=NULL){
        if(current_item->account_number==account_number){
            return current_item;
        }
        current_item = current_item->next;
    }
    return NULL;
}

void update_account(int account_number,float new_balance){
    current_item = first_item;
    while(current_item!=NULL){
        if(current_item->account_number==account_number){
            current_item->balance = new_balance;
            return;
        }
        current_item = current_item->next;
    }
}

int main(int argc,char **argv){
    bank_account *new_account;
    bank_account *found_account;
    int account_number;
    float balance;
    char name[20];
    int i;
    for(i=0;i<RECORDS;i++){
        sprintf(name,"Account %d",i);
        account_number = i;
        balance = (float)i*100.0;
        new_account = create_account(name,account_number,balance);
        add_account(new_account);
    }
    print_accounts();
    printf("Done\n");
    printf("Deleting account 50\n");
    delete_account(50);
    printf("Deleting account 25\n");
    delete_account(25);
    /**
     * @brief list all accounts
     * 
     */
    list_all();
    /**
     * @brief modify account
     * 
     */
    modify_account();
    printf("Done\n");
    printf("Finding account 50\n");
    found_account = find_account(50);
    if(found_account!=NULL){
        printf("Found account 50\n");
        printf("Name: %s\n",found_account->name);
        printf("Account Number: %d\n",found_account->account_number);
        printf("Balance: %f\n",found_account->balance);
    }
    return 0;
}



