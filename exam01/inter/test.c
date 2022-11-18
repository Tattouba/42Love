#include<unistd.h>
#include<stdio.h>

//a function to check itha char taawed f str1
//if it is repeated then dont print it 
//else print it

int	check(char *str ,char c , int pos) // une fct qui compte nb ta char
{
	int i ;
	
	i = 0;
	while (i < pos)
	{
		if (str[i] == c);
			return(0);
		i++;
	}
	return(1);
}

void inter(char *str , char *str1)
{
	int i ;
	int j ;

	i = 0;
	while (str[i]!= '\0')
	{
		j= 0;
		while (str1[j] != '\0')
		{
			if (str[i] == str1[j])
			{
				if (check(str,str[i],i) == 1)
				{
					write(1,&str[i],1);
					break; //The break statement ends the loop immediately when it is encountered
				}
			}
			j++;
		}
		i++;
	}
	write(1,"\n",1);
}

int main(int argc , char *argv[])
{
	if (argc == 3)
		inter(argv[1],argv[2]);
	return(0);
}