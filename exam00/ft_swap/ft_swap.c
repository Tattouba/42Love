#include<unistd.h>
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
    int a=2;
    int b=4;
    printf("%d",a);
    printf("\n");
    printf("%d",b);
    printf("\n");
    ft_swap(&a,&b);
    printf("%d",a);
    printf("\n");
    printf("%d",b);
return(0);
}*/