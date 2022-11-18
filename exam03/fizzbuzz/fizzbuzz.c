#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

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

int check_mthree(int nb)
{
	if (nb % 3 == 0)
		return(1);
	else
		return(0); //false

}

int check_mfive(int nb)
{
	if (nb % 5 == 0)
		return(1);
	else
		return(0); //false

}

int main()
{
	int nb;

	nb = 0;
	while(nb <= 100)
	{
		if (check_mthree(nb))
			write(1,"fizz\n",5);
   
		else if (check_mfive(nb))
			write(1,"buzz\n",5);
	
		else if (check_mfive(nb) && check_mthree(nb))
			write(1,"fizzbuzz\n",9);
		else
		{
			ft_putnbr(nb);
			write(1,"\n",1);
		}	
		nb++;	
	}
	return(0);
}