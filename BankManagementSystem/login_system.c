#include "functions.h"
void login_system(d_list *admin)
{
    char tmp_password[30];
    char tmp_name[30];
    char empt;
    char process_operator;
    unsigned int tmp_phoneNumber;
    unsigned int customer_id;
    unsigned int tmp_amount;
    unsigned int tmp_idNumber;

    tmp_amount = 0;
    d_list *tmp;
    d_list *dest_customer;
    scanf("%c",&empt);



    printf("Please enter customer ID : ");
    scanf("%u",&customer_id);
    scanf("%c",&empt);

    printf("Please enter password : ");
    fgets(tmp_password,30,stdin);


    if(check_user_informations(admin,tmp_password,customer_id))
    {
        tmp = find_user_data(admin,tmp_password,customer_id);
        if(tmp == NULL)
        {
            printf("an unexpected error was encountered\n");
            return;
        }
        else
        {
            while(1)
            {
                printf("\n\n\nGIRIS BASARILI BIR SEKILDE GERCEKLESTI TEBRIKLER\n\n\n");
                back:
                printf("1->See my own account's details\n");
                printf("2->Load money into account\n");
                printf("3->Withdraw money\n");
                printf("4->Send money to another account\n");
                printf("5->Delete my account\n");
                printf("6->Exit my account\n");
               

                printf("Your choice -> ");
                scanf("%c",&process_operator);
                scanf("%c",&empt);

                if(process_operator == '1')
                    print_customer_informations(tmp);
                else if(process_operator == '2')
                {
                    tmp_amount = 0;
                    printf("Please enter the amount of money you want to send(it must be integer value) -> ");
                    scanf("%u",&tmp_amount);
                    scanf("%c",&empt);
                    printf("\n\nPrevious Balance -> %u\n\n",tmp->total_balance);
                    tmp->total_balance += tmp_amount;
                    printf("\n\n Current Balance -> %u\n\n",tmp->total_balance);
                }
                else if(process_operator == '4')
                {
                    tmp_amount = 0;
                    printf("\n\nPlease enter the id number of the person you want to send -> ");
                    scanf("%u",&tmp_idNumber);
                    scanf("%c",&empt);
                    printf("\n\nPlease enter the name of the person you want to send -> ");
                    fgets(tmp_name,30,stdin);
                    printf("\n\nPlease enter the amount of money you want to send(it must be integer value) -> ");
                    scanf("%u",&tmp_amount);
                    scanf("%c",&empt);
                    tmp_name[ft_strlen(tmp_name) - 2] = '\0';

                    dest_customer = find_user(admin,tmp_idNumber,tmp_name);

                    if(dest_customer)
                    {
                        if(tmp->total_balance < tmp_amount)
                        {
                            printf("Insufficient balance!!\n\n");
                            goto back;
                        }
                        else
                        {
                            printf("The transfer was carried out successfully.\n\n");
                            printf("\n\nPrevious Balance -> %u\n\n",tmp->total_balance);
                            tmp->total_balance -= tmp_amount;
                            printf("\n\n Current Balance -> %u\n\n",tmp->total_balance);
                            dest_customer->total_balance += tmp_amount;
                        }
                        goto back;
                    }
                    else
                    {
                        printf("invalid informations\n\n");
                        goto back;
                    }
                }
                else if(process_operator == '5')
                {
                    printf("Once you delete your account, you will no longer be able to access it.\nAre you sure you want to continue?Yes(y)/No(n) -> ");
                    scanf("%c",&process_operator);
                    printf("your chouice -> %c",process_operator);
                    delete_node(admin,tmp);
                    return ;
                }
                else if(process_operator == '6')
                    return;
                else
                    goto back;              
            }
            

        }



    }




}