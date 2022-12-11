#include "functions.h"
void    print_customer_informations(d_list *customer)
{
    printf("\n\n====================================\n\n");
    printf("customer name -> %s\n",customer->name);
    printf("customer surname -> %s\n",customer->surname);
    printf("customer password -> %s\n",customer->password);
    printf("customer phone number -> %u\n",customer->customer_phone_number);
    printf("customer id number -> %u\n",customer->customer_id);
    printf("customer total balance -> %u\n",customer->total_balance);
    printf("\n\n====================================\n\n");
}