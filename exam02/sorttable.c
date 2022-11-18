#include<unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int j;
    int tmp;

    while (i < size )
    {
        j = 0;
        while(j < size - 1)
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
	int tab[5] = {5,4,3,2,1};
	int size = 5;
	int i = 0 ;
	ft_sort_int_tab(tab,size);

		printf("dihidhi");
		printf("%d",tab[0]);
        printf("%d",tab[1]);
        printf("%d",tab[2]);
        printf("%d",tab[3]);
        printf("%d",tab[4]);
	
	return(0);
}