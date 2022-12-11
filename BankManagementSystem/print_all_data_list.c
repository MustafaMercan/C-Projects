#include "functions.h"
void print_all_data_list(d_list *admin)
{
    d_list *tmp;
    tmp = admin;
    while(tmp->next != NULL)
    {
        print_customer_informations(tmp);
        tmp = tmp->next;
    }
    print_customer_informations(tmp);
}