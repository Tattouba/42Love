#include<unistd.h>
#include<stdio.h>

int ft_checkdoubles(char *str , char c, int pos) 
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

int ft_rm_double_double(char *str , char c)
{
	int i = 0;
	while(str[i] != '\0')
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
	int j = 0;

	while (str1[i] != '\0')
	{
		if (ft_checkdoubles(str1 ,str1[i], i))
			write(1,&str1[i],1);
		i++;
	}
	while(str2[j] != '\0') 
	{
		if (ft_rm_double_double(str1 , str2[j])) //nekhou char min 2 w je parcours loula kol
		{
			if (ft_checkdoubles(str2 ,str2[j], j)) //parcours tthenya until p-1
				write(1,&str2[j],1);	
		}
		j++;
	}
}

/*int main(int argc, char* argv[])
{
	if (argc == 3)
	{
		ft_union(argv[1] , argv[2]);
	}
	write(1,"\n",1);
	return(0);
}*/

int main()
{
    char str1[] = "zpadinton";
    char str2[] = "paqefwtdjetyiytjneytjoeyjnejeyj"
    ft_union(str1 , str2);
    return(0);
}