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
        while(j < size -1 )
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
    int tab[]={5,4,3,2,1};
    int size = 5;
    ft_sort_int_tab(tab, size);

    int i = 0;
    while(i < size)
    {
        printf("%d", tab[i]);
        i++;
    }
    return(0);
}