#include<stdio.h>
void	ft_swap(int *a, int *b)
{
	int tmp ;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int x = 2;
	int y = 4;
	int *a;
	int *b;
	a = &x;
	b = &y;
	printf("a = %d , b = %d",x,y);
	ft_swap(a,b);
	printf("\n");
	printf("a = %d , b = %d",x,y);
	return(0);
}