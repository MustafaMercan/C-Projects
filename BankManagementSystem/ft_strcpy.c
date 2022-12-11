#include "functions.h"
void    ft_strcpy(char *str,const char *str2)
{
    int i;

    i = 0;
    while(str2[i] != '\0')
    {
        str[i] = str2[i];
        i++;
    }
    str[i] = '\0';
}