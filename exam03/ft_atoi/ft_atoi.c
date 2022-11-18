//It works much like the standard 
//atoi(const char *str) function, see the man.

#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int r = 0;
	int sign = 1;

	while(*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= (-1);
		str++; 
	}
	while(*str >= '0' && *str <= '9')
	{
		r = r *10 + *str - '0';
		str++;
	}
	return(sign * r);
}

int main()
{
	char test[] = "a   +1234ab567";
	int rtheir;
	int mine;
	rtheir = ft_atoi(test);
	mine = atoi(test);
	printf("their : %d\n",rtheir);
	printf("their : %d\n",mine);
	return(0);
}