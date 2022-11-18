#include<unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size) // najim namlha fact wahdha
{
    int i = 0;
    int j;
    int tmp;
    
    while(i <= size)
    {
        j= 0;
        while (j < size)
        {
            if (tab[i] < tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j]= tmp;
            }
            j++;
        }
    i++;
    }
}
int main()
{
	int tab[5] = {5,4,3,2,1};
	int size = 5;
	int i = 0 ;
	ft_sort_int_tab(tab,size);
	while(i < size)
	{
		printf("%d",tab[0]);
		i++;
	}
	return(0);
}