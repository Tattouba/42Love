#include<unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}


void	ft_putnbr(int nb)
{
	if (nb == (-2147483648))
		write(1,"-2147483648",11);
	else if (nb >= 0 && nb <= 9)
		ft_putchar(nb +'0');
	else if (nb < 0)
	{
		write(1,"-",1);
		ft_putnbr(nb *  (-1));
	}
	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}

}

int main()
{
	int n1 ,n2 ,n3;
	n1 = 8;
	n2 = -2147483648;
	n3 = 12345;
	ft_putnbr(n1);
	printf("\n");
	ft_putnbr(n2);
	printf("\n");
	ft_putnbr(n3);
	return(0);
}

/*


void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if ((nb >= 0) && (nb <= 9))
		ft_putchar(nb + '0');
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

*/