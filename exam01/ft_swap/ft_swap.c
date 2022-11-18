#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
    int  tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

/*int main()
{
    int *a;
    int *b;
    int x = 8;
    int y = 10;
    printf("x= %d y= %d\n",x,y);
    a = &x;
    b = &y;
    ft_swap(a,b);
    printf("x= %d y= %d",x,y);
    return(0);
}*/
