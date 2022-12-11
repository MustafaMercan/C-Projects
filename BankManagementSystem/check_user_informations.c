#include "functions.h"
bool check_user_informations(d_list *admin,char *password, unsigned int id_number)
{
    d_list *tmp;
    tmp = find_user_data(admin,password,id_number);
    if(tmp == NULL)
        return false;
    else
        return true;
}
