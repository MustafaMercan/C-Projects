#include "functions.h"
d_list  *create_new_node(const char *name,const char *surname, const char *password,unsigned int phone_number)
{

    /*
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
*/
    /*printf("name ->  %s\n",name);
    printf("name ->  %s\n",surname);
    printf("name ->  %s\n",password);
    printf("name ->  %u\n",phone_number);
*/

    d_list *new_node;
    new_node = (d_list*)malloc(sizeof(d_list));
    
    new_node->name = (char*)malloc(sizeof(ft_strlen(name)));
    new_node->surname = (char*)malloc(sizeof(ft_strlen(surname)));
    new_node->password = (char*)malloc(sizeof(ft_strlen(password)));

    ft_strcpy(new_node->name,name);
    ft_strcpy(new_node->surname,surname);
    ft_strcpy(new_node->password,password);
    new_node->customer_phone_number = phone_number;

    new_node->customer_id = 1000 + USER_NUMBER++;
    new_node->total_balance = 0;
    new_node->next = NULL;


    return new_node;
}