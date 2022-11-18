#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int main()
{
	int x = 1;
	int y = 2;
	
	int *a;
	int *b;
	a = &x;
	b = &y;
	printf("a = %d b = %d\n",x,y);
	ft_swap(a, b);
	printf("newa = %d newb = %d\n",x,y);
	return(0);
}*/
