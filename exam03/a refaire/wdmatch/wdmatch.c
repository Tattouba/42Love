#include<unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        write(1,&str[i],1);
        i++;
    }
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    } 
    return(i);
}

int main(int argc , char* argv[])
{
    int i = 0;
    int j = 0;
    int counter = 0;

    if (argc == 3)
    {
        while (argv[1][i] != '\0')
        {
            while (argv[2][j] != '\0')
            {
                if (argv[1][i] == argv[2][j] )
                {
                    counter++;
                    break;
                }
                j++;
            }
        i++;
        }
        if (counter == ft_strlen(argv[1]));
            ft_putstr(argv[1]);
    }
    write(1,"\n",1);
    return(0);
}