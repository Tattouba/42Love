#include<unistd.h>
#include<stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] !='\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strrev(char *str)
{
	
	int i = 0;
	int l = ft_strlen(str) - 1;
	char tmp;

	while(i < l) //pour ne pas revenir a l etat initial
	{
		tmp = str[i];
		str[i] = str[l];
		str[l] = tmp;
		i++;
		l--;
	}
	return(str);
}

int main()
{
	char str[] = "Fatma";
	printf("%s\n",str);
	char *new = ft_strrev(str);
	printf("%s",new);
	return(0);
}