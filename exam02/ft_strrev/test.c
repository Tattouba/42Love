#include<unistd.h>
#include<stdio.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        i++;
        
    }
    return(i);
}

char    *ft_strrev(char *str)
{
    int l = ft_strlen(str) -1 ; //4
    int i = 0;
    char tmp;

    while(i < l)
    {
        tmp = str[i];
        str[i]= str[l];
        str[l]= tmp;
        i++;
        l--;
    }
return(str);
}




int main()
{
    char str[] = "fatma";
    char *r = ft_strrev(str);
    printf("%s",r);
    return(0);
}