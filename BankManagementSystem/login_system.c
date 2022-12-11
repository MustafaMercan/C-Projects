#include "functions.h"
void login_system(d_list *admin)
{
    char tmp_password[30];
    char empt;
    unsigned int tmp_phoneNumber;
    unsigned int customer_id;
    scanf("%c",&empt);



    printf("Please enter customer ID : ");
    scanf("%u",&customer_id);
    scanf("%c",&empt);

    printf("Please enter password : ");
    fgets(tmp_password,30,stdin);


    if(check_user_informations(admin,tmp_password,customer_id))
    {
        printf("\n\n\nGIRIS BASARILI BIR SEKILDE GERCEKLESTI TEBRIKLER\n\n\n");
    }




}