#include <stdio.h>
int  ft_strlen(char *str) //pointer is an array 
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

return(i);
}

char    *ft_strrev(char *str) // result is a pointer 
{
    int length ;
    int i ;
    char tmp;

    i=0;
    length = ft_strlen(str) - 1; //0 1 2
    
    while (i < length) //quand on arrive au milieux ca change pas sinn on revient a chaine initilale
    {
        tmp = str[length];
        str[length] = str[i];
        str[i] = tmp;
        i++;
        length--;
    }
return(str);
}

int main(void)
{
    char str[] = "abc"; // it should be initialiate as an array 

    //char *str = "abc"; // faux 
    //printf("%d",ft_strlen(str));
    printf("%s",ft_strrev(str));
    return(0);
}