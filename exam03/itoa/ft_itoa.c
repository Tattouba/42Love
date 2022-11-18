#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<limits.h>

int ft_nbr_length(long int nbr)
{
	int c = 0;

	if (nbr < 0)
	{
		nbr *=(-1);
		c++;
	}

	while (nbr > 0)
	{
		nbr = nbr / 10;
		c++;
	}
	return(c);
}

char	*ft_itoa(int nbr)
{
	long n;
	char *array;
	int l;

	n = nbr;
	l = ft_nbr_length(n); //indexex max 
	array = (char*)malloc((l + 1) * sizeof(char));
	if(!array)
		return(0);
	array[l] = '\0';
	l--;
	if (n == 0)
	{
		array[0] = '0';
		return(array);
	}
	if (n <0)
	{
		array[0] = '-';
		n *= (-1);
	}
	while (n > 0)
	{
		array[l] = '0' + (n % 10);
		n  = n / 10;
		l--;
	}
	return(array);
}


int main()
{
	long int nbr1 = INT_MIN;
	long int nbr2 = INT_MAX;
	long int nbr3 = 0;

	printf("%s\n",ft_itoa(nbr1));
	printf("%s\n",ft_itoa(nbr2));
	printf("%s\n",ft_itoa(nbr3));

	return 0;
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(47483648));
// }