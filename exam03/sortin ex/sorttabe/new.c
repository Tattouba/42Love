#include<unistd.h>
#include<stdio.h>


void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i= 0;

	while( i <= size)
	{
		j = 0;
		while(j < size )
		{
			if (tab[i] < tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int tab[] = {5 , 4 ,3, 2 , 1};
	int size = 5;
	int i = 0;
	ft_sort_int_tab(tab,size);
	while(i < size)
	{
		printf("%d\n",tab[i]);
		i++;
	}
	return(0);
}