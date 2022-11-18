#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>

int ft_abs(int x)
{
	if (x < 0)
		x = -x;
	return(x);
}

int     *ft_range(int start, int end)
{
	int size = ft_abs(end - start) + 1;
	int *array;
	int i = 0;

	array = (int*)malloc(size * sizeof(int));
	if(!array)
		return(0);
	if (start == end)
		array[0] = start;
	else if (start < end)
	{
		while(i < size)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	else if (start > end)
	{
		while(i < size)
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	return(array);
}

int main()
{
	int i = 0;
	int start = 0;
	int end = -3;
	int size = ft_abs(end - start) + 1;

	while(i < size)
	{
		printf("%d\n",ft_range(start,end)[i]);
		i++;
	}
	return(0);
}