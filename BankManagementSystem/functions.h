#ifndef FUNCTIONS_H
# define FUNCTIONS_H


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
static int USER_NUMBER = 0;

typedef struct  data_list
{
    char    *name;
    char    *surname;
    char    *password;
    unsigned int customer_phone_number;
    unsigned int customer_id;
    unsigned int total_balance;
    struct data_list *next;
}d_list;

void     menu();
d_list  *create_new_node(const char *name,const char *surname, const char *password,unsigned int phone_number);
int ft_strlen(const char* str);
void    ft_strcpy(char *str,const char *str2);
void add_new_customer(d_list *admin);
void print_customer_informations(d_list *admin);
void add_list_new_node(d_list *admin,d_list *new_customer);
void print_all_data_list(d_list *admin);
void login_system(d_list *admin);
bool check_user_informations(d_list *admin,char *password, unsigned int id_number);
d_list *find_user_data(d_list *admin,char *password, unsigned int id_number);
bool ft_strcmp(char *str1, char *str2);
#endif