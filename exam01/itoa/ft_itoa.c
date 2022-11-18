#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int ft_length(int nbr)
{
	int counter = 0;
	int R ;
	R = nbr;
	
	if (nbr > 0) //42 size = 2;
	{
		while ( R != 0)
		{
			R = R / 10;
			counter++; 
		}
		return(counter);
	}
	else if (nbr < 0)
	{
		nbr = nbr * (-1);
		while ( R != 0)
		{
			R = R / 10;
			counter++; 
		}
		counter++;
		return(counter); // -42 size = 3;
	}
	else if (nbr == 0)
		return(1);	
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

char	*ft_itoa(int nbr)
{
	char *str ;
	int  ; //+non terminator 
	str = (char*)malloc(sizeof(char)*l);
	int i = ft_length(nbr)-1;
	int pnumber;
	
	if (!str)
		return(0);
	
	str[l] = '\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return(str);
	}
	else if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
		while(i > 0)
		{	
			pnumber = nbr % 10;
			str[i] = pnumber + '0';
			nbr = nbr / 10;
			i--;
		}
		return(str);
	}
	else if (nbr > 0)
	{
		while(i >= 0)
		{	
			pnumber = nbr % 10;
			str[i] = pnumber + '0';
			nbr = nbr / 10;
			i--;
		}
		return(str);
	}
	else
		return(0);	
}

int main()
{
	int nbr = 0;
	int R = ft_length(nbr);
	//printf("%d\n",R);
	//int d =max_diviser(nbr);
	//printf("%d\n",d);
	ft_putstr(ft_itoa(nbr));
	return 0;
}

//to check it with others when they do it 
