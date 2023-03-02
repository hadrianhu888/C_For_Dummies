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
bank_account *last_item;
FILE  *file ="bank.csv";


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
void save_accounts(void);
void load_accounts(void);
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
    bank_account *account;
    printf("Enter account number: ");
    scanf("%d",&account_number);
    account = find_account(account_number);
    if(account==NULL){
        printf("Account not found");    
    }else{
        printf("Enter new balance: ");
        scanf("%f",&new_balance);
        update_account(account_number,new_balance);
    }
}

void update_account(int account_number,float new_balance)
{
    /**
     * @brief update account 
     * 
     * @param account_number 
     * @param new_balance 
     */
    bank_account *account;
    account = find_account(account_number);
    if(account==NULL){
        printf("Account not found");    
    }else{
        account->balance = new_balance;
    }
}

bank_account *find_account(int account_number)
{
    /**
     * @brief find account 
     * 
     * @param account_number 
     * @return bank_account* 
     */
    bank_account *account;
    account = first_item;
    while(account!=NULL){
        if(account->account_number==account_number){
            return account;
        }
        account = account->next;
    }
    return NULL;
}

void load_accounts(void)
{
    /**
     * @brief load accounts 
     * 
     */
    bank_account *account;
    char name[20];
    int account_number;
    float balance;
    FILE *file;
    file = fopen("accounts.txt","r");
    if(file==NULL){
        printf("Error opening file");
        return;
    }
    while(fscanf(file,"%s %d %f",name,&account_number,&balance)!=EOF){
        account = create_account(name,account_number,balance);
        add_account(account);
    }
    fclose(file);
}

void save_accounts(void)
{
    /**
     * @brief save accounts 
     * 
     */
    bank_account *account;
    FILE *file;
    file = fopen("accounts.txt","w");
    if(file==NULL){
        printf("Error opening file");
        return;
    }
    account = first_item;
    while(account!=NULL){
        fprintf(file,"%s %d %f",account->name,account->account_number,account->balance);
        account = account->next;
    }
    fclose(file);
}

bank_account *list_all(void)
{
    /**
     * @brief list all accounts 
     * 
     * @return bank_account* 
     */
    bank_account *account;
    account = first_item;
    while(account!=NULL){
        printf("Name: %s",account->name);
        printf("Account number: %d",account->account_number);
        printf("Balance: %f",account->balance);
        account = account->next;
    }
    return NULL;
}

void delete_account(int account_number)
{
    /**
     * @brief delete account 
     * 
     * @param account_number 
     */
    bank_account *account;
    bank_account *previous_account;
    account = first_item;
    previous_account = NULL;
    while(account!=NULL){
        if(account->account_number==account_number){
            if(previous_account==NULL){
                first_item = account->next;
            }else{
                previous_account->next = account->next;
            }
            free(account);
            return;
        }
        previous_account = account;
        account = account->next;
    }
}

void delete_all_accounts(void)
{
    /**
     * @brief delete all accounts 
     * 
     */
    bank_account *account;
    bank_account *next_account;
    account = first_item;
    while(account!=NULL){
        next_account = account->next;
        free(account);
        account = next_account;
    }
    first_item = NULL;
    last_item = NULL;
    printf("All accounts deleted");
}

void print_accounts(void)
{
    /**
     * @brief print accounts 
     * 
     */
    bank_account *account;
    account = first_item;
    while(account!=NULL){
        printf("Name: %s",account->name);
        printf("Account number: %d",account->account_number);
        printf("Balance: %f",account->balance);
        account = account->next;
    }
}

void add_account(bank_account *new_account)
{
    /**
     * @brief add account 
     * 
     * @param new_account 
     */
    if(first_item==NULL){
        first_item = new_account;
        last_item = new_account;
    }else{
        last_item->next = new_account;
        last_item = new_account;
    }
    /**
     * @brief print accounts
     * 
     */
    printf("Account added");
}

bank_account *create_account(char *name,int account_number,float balance)
{
    /**
     * @brief create account 
     * 
     * @param name 
     * @param account_number 
     * @param balance 
     * @return bank_account* 
     */
    bank_account *account;
    account = (bank_account *)malloc(sizeof(bank_account));
    strcpy(account->name,name);
    account->account_number = account_number;
    account->balance = balance;
    account->next = NULL;
    printf("Account created");
    return account;
}

int main(int argc,char **argv)
{
    /**
     * @brief main 
     * 
     * @param argc 
     * @param argv 
     * @return int 
     */
    bank_account *account;
    first_item = NULL;
    last_item = NULL;
    load_accounts();
    while(1){
        printf("1. Add account\n");
        printf("2. Delete account\n");
        printf("3. Print accounts\n");
        printf("4. Delete all accounts\n");
        printf("5. List all accounts\n");
        printf("6. Modify account\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 1:
                add_account(create_account("John",123,1000));
                break;
            case 2:
                delete_account(123);
                break;
            case 3:
                print_accounts();
                break;
            case 4:
                delete_all_accounts();
                break;
            case 5:
                list_all();
                break;
            case 6:
                modify_account();
                break;
            case 7:
                save_accounts();
                exit(0);
                break;
            default:
                printf("Invalid choice");
                break;
        }
    }
    return 0;
}

