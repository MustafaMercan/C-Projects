#include "functions.h"
d_list *find_user(d_list *admin,unsigned int id, char *name)
{
    d_list *tmp;
    tmp = admin;

    while(tmp->next != NULL)
    {
        if(id == tmp->customer_id && ft_strcmp(tmp->name,name))
            return tmp;
        tmp = tmp->next;
    }
    if(id == tmp->customer_id && ft_strcmp(tmp->name,name))
        return tmp;
    
    return NULL;

}