#include "functions.h"
void add_list_new_node(d_list *admin,d_list *new_customer)
{
    d_list *tmp;
    tmp = admin;
    if(!admin)
    {
        printf("SOMETHINGS ARE WRONG? \n");
        return;
    }
    else
    {
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = (d_list*)malloc(sizeof(d_list));
        tmp->next = new_customer;
        new_customer->next = NULL;
    }
}