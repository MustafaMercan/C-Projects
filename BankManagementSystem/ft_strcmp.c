#include "functions.h"
bool ft_strcmp(char *str1, char *str2)
{
    int i;

    i=0;
    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
            return false;

        i++;
    }
    return true;
}