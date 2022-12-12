#include "functions.h"
void    delete_node(d_list *admin,d_list *targ)
{
    d_list *tmp;
    d_list *del_node;
    if(targ->customer_id == 1000)
    {
        printf("Root's account can't deleted!!\n\n");
        return;
    }
    else
    {
        tmp = admin;
        while(tmp->next != targ && tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        if(tmp->next == targ)
        {
            print_customer_informations(tmp->next);
            del_node = tmp->next;
            tmp->next = del_node->next;
            free(del_node);

        }
        else
            printf("\n\nhatahata\n\n");
    }

}