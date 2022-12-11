#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *str;
    char tmp = '#';
    int i = 0;
    str = (char *) malloc(sizeof(char));
    printf("Please enter a string: ");
    while(tmp != '\n')
    {
        tmp = getchar();
        str = (char*)realloc(str,sizeof(char) + 1);
        str[i] = tmp;
        i++;
    }
    printf("%s\n",str);
    return 0;
}