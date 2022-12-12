#include "functions.h"
void add_new_customer(d_list *admin)
{
    printf("\n\nadd_new_customer_test\n\n\n");
    //printf("%s -> %s -> %s\n\n",admin->name,admin->surname,admin->password);

    char tmp_name[30];
    char tmp_surname[30];
    char tmp_password[30];
    unsigned int tmp_phoneNumber;
    char emp;

    d_list *new_customer;


    scanf("%c",&emp);

/*INPUT VALUES USER*/
    printf("Please enter name : ");
    fgets(tmp_name,30,stdin);
    printf("\nPlease enter surname : ");
    fgets(tmp_surname,30,stdin);
    printf("\nPlease enter password : ");
    fgets(tmp_password,30,stdin);
    printf("\nPlease enter phone number(max 10 number) : ");
    scanf("%u",&tmp_phoneNumber);
     scanf("%c",&emp);
    tmp_name[ft_strlen(tmp_name)-2] = '\0';
    tmp_surname[ft_strlen(tmp_surname)-2] = '\0';
    tmp_password[ft_strlen(tmp_password)-2] = '\0';
    //printf("name -> %s\nsurname->%s\npassword->%s\nphonenum->%u",tmp_name,tmp_surname,tmp_password,tmp_phoneNumber);

    new_customer = create_new_node(tmp_name,tmp_surname,tmp_password,tmp_phoneNumber);

    //print_customer_informations(new_customer);

    add_list_new_node(admin,new_customer);
    printf("The new account has been successfully created\n.");
    printf("Your id number is -> %u",new_customer->customer_id);

    //print_all_data_list(admin);
    
}