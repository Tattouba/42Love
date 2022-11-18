#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
    write(1,&c,1);
}


void	ft_putnbr(int nb)
{
    if (nb == -2147483648)
        write(1,"-2147483648",11);
    else if (nb < 0)
    {
        write(1,"-",1);
        ft_putnbr(nb * -1);
    }
    else if (nb >=0  && nb <= 9)
       ft_putchar(nb + '0');
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int main()
{
    ft_putnbr(-2147483648);
    printf("\n");
    ft_putnbr(0);
    printf("\n");
    ft_putnbr(214748);
    printf("\n");
    ft_putnbr(2147483647);
    return(0);
}