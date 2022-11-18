#include<unistd.h>
#include<stdio.h>

//check la repetion dans une chaine
int ft_checkdoubles(char *str , char c, int pos) 
{
	int i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return(0); //found a repetation dont print it to me 
		i++;
	}
	return(1); //correct
}

//rm les charc de la 1 ere chaine dans la deuxieme

int ft_rm_double_double(char *str , char c)  // str2 nlawjou fyha ala des caractere kima str1
{
	int i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == c)
			return(0); //found a repetation dont print it to me 
		i++;
	}
	return(1); //correct
}

void ft_union(char *str1 , char *str2)
{
	int i = 0;
	int j = 0;

	while (str1[i] != '\0')
	{
		if (ft_checkdoubles(str1 ,str1[i], i))//1er check
			write(1,&str1[i],1);
		i++;
	}
	//first comparer avec la peremier chaine
	//comparer avec elle mm 

	while(str2[j] != '\0') 
	{
		if (ft_rm_double_double(str1 , str2[j])) //rm doubles doubles from str1 to str2
		{
			if (ft_checkdoubles(str2 ,str2[j], j))
				write(1,&str2[j],1);	
		}
		j++;
	}
}


int main(int argc, char* argv[])
{
	if (argc == 3)
	{
		ft_union(argv[1] , argv[2]);
	}
	write(1,"\n",1);
	return(0);
}