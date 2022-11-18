#include<stdio.h>
#include<string.h>
#include<unistd.h>

void	ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1,str,1);
        str++;
    }
}

/*int main(int argc , char **argv)
{
    int i;
    i = 0;
    //argc = 2;
    while(i < argc)
    {
        ft_putstr(argv[i]);
        write(1,"\n",1);
        i++;
    }
    return(0);
}*/
// argc is the nb of arguments , and not the index


int main(int argc , char **argv)
{
    int i;
    i = 0;
    //argc = 2;
 while (i < argc) 
 {
    ft_putstr(argv[i]);
    i++;
 }
    return(0);
}