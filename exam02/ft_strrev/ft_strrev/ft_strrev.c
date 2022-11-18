#include<unistd.h>
#include<stdio.h>


int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}
char    *ft_strrev(char *str)
{
    int i = 0;
    int length = ft_strlen(str) - 1;
    char tmp;
    while(i < length)
    {
        tmp = str[i];
        str[i] = str[length];
        str[length] = tmp;
        i++;
        length--;
    }
    return(str);
}

int main()
{
    char  str[]= "fatma";
    char *r = ft_strrev(str);
    printf("%s",r);
    return(0);
}