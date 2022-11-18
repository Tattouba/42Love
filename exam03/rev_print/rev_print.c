#include<unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}


char *ft_rev_print (char *str)
{
    int i = ft_strlen(str) - 1;
    while(i >= 0)
    {
        write(1,&str[i],1);
        i--;
    }
    write(1,"\n",1);
    return(str);
}

/*int main(int argc , char* argv[])
{
    if (argc == 2)
    {
        ft_rev_print (argv[1]);
    }
    else if (argc == 1)
        write(1,"\n",1);

    return(0);
}*/

int main()
{
	// char str0[] = "zaz";
    // char str1[] = "dub0 a POIL";
    char str2[] = ""; //empty strings or no arguments

    //ft_rev_print (str0);
    //printf("\n");
    //ft_rev_print (str1);
    //printf("\n");
	ft_rev_print (str2);
	return(0);
}


