#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
//check for the nn terminator and check for the size and the returns :)
int ft_length(int nbr)
{
	int counter = 0;
	int R ;
	R = nbr;
	
	if (nbr == 0)
		counter = 1;
	if (nbr > 0) //42 size = 2;
	{
		while ( R != 0)
		{
			R = R / 10;
			counter++; 
		}
	}
	else if (nbr < 0)
	{
		nbr = nbr * (-1);
		while ( R != 0)
		{
			R = R / 10;
			counter++; 
		}
		counter++; // -42 size = 3;
	}
	return(counter);
}

char	*ft_itoa(int nbr)
{
	char *str ;
	int pnumber;
	int i ;
	if (nbr == INT_MIN)
	{
		str = "-2147483648"; //has the nn terminator
		return (str);
	}	
	str = (char*)malloc(sizeof(char)* (ft_length(nbr) + 1)); //for the nn terminator
	i = ft_length(nbr);
	if (!str)
		return(0);
	str[i] = '\0';
	i--;
	if (nbr == 0)
	{
		str[0] = '0';
		return(str);
	}
	else if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		pnumber = nbr % 10;
		str[i] = pnumber + '0';
		nbr = nbr / 10;
		i--;	
	}
	return(str);		
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
	int nbr1 = -2147483648;
	int nbr2 = -47;
	int nbr3 = 5;
	
	// int R = ft_length(nbr1);
	// printf("%d\n",R);
	// int R1 = ft_length(nbr2);
	// printf("%d\n",R1);
	// int R3 = ft_length(nbr3);
	// printf("%d\n",R3);
	//int d =max_diviser(nbr);
	//printf("%d\n",d);
	// printf("\n");
	ft_putstr(ft_itoa(nbr1));
	printf("\n");
	ft_putstr(ft_itoa(nbr2));
	printf("\n");
	ft_putstr(ft_itoa(nbr3));
	return 0;
}

