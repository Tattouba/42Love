#include<unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char *ft_rev_print (char *str)
{
	int l = ft_strlen(str) - 1;
	while(l >= 0)
	{
		write(1,&str[l],1);
		l--;
	
	}
	write(1,"\n",1);
	return(str);
}

/*int main()
{
	char str[] = "";
	ft_rev_print (str);
	return(0);
}*/
