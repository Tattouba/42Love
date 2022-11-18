// without a prototype == main
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

int main(int argc , char* argv[])
{
    int i;
    i = 0;
    if (argc == 2) // that means we have at least one sargument
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i] != '\0' 
        && argv[1][i] != ' ' && argv[1][i] != '\t')
        {
            write(1,&argv[1][i],1);
            i++;
        }
        //write(1,"\n",1)
    }
    write(1,"\n",1); //this is for if and else
    return(0);
}

//more than two arguments new line
//no arguments == new ligne
