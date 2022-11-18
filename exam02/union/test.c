#include<unistd.h>
#include<stdio.h>

int check_doubles(char *str , char c , int pos)
{
	int i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

int check_repeat(char *str , char c)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

void ft_union(char *str1 , char *str2)
{
	int i = 0;

	while(str1[i] != '\0')
	{
		if (check_doubles(str1 , str1[i], i) == 1)
			write(1,&str1[i],1);
		i++;
	}
	i = 0;
	while(str2[i] != '\0')
	{
		if (check_repeat(str1 , str2[i]) == 1)
		{
			if (check_doubles(str2 , str2[i], i) == 1)
				write(1,&str2[i],1);
		}
		i++;
	}
}

int main(int argc , char* argv[])
{
	int n = 0;
	if (argc == 3)
		ft_union(argv[1] , argv[2]);
	write(1,"\n",1);
	return(0);
}
