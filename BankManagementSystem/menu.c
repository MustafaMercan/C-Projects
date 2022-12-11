#include "functions.h"
void menu()
{

    d_list *ADMIN;
    ADMIN = create_new_node("root","root","root",1111111);
    char n = '#';
    while(n != 'q')
    {
    printf("========Welcome Mercan Bank System========\n");
    //printf("admin test -> %s %s %s",ADMIN->name,ADMIN->surname,ADMIN->password);
    printf("1-> Create a new account\n");//önceden kayıtlı mı değil mi diye kontrol edilecek
    printf("2-> Log In \n");
    printf("Please select the option you want to trade ->");
    n = getchar();


        if(n == '1')
            add_new_customer(ADMIN);
        else if(n == '2')
            login_system(ADMIN);
    }

}