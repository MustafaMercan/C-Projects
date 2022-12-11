#include "functions.h"
d_list *find_user_data(d_list *admin,char *password, unsigned int id_number)
{
    d_list *tmp;
    tmp = admin;

    while(tmp->next != NULL)
    {
        if(tmp->customer_id == id_number && ft_strcmp(tmp->password,password))
        {
            return tmp;
        }
        tmp = tmp->next;
    }
    if(tmp->customer_id == id_number && ft_strcmp(tmp->password,password))
        return tmp;

    return NULL;
}
