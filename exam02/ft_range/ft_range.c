#include<stdio.h>
#include<stdlib.h>

int abs(int x)
{
    if (x < 0)
        x = x * (-1);
    return(x);
}

int     *ft_range(int start, int end)
{
    int *new;
    int size ;
    int i = 0;
    
    size = abs(end - start) + 1;
    new = (int*)malloc(size * sizeof(int));
    if (!new)
        return(0);
 
    if (size == 1)
        new[0] = start;
    if (start < end)
    {
        while (i < size)
        {
            new[i] = start;
            start++;
            i++;

        }
    }
    else if (start > end)
    {
        while (i < size)
        {
            new[i] = start;
            start--;
            i++;
        }
    }
    return(new);    
}

int main()
{
    int start = 0;
    int end = -3;
    int size = abs(end - start) + 1; 
    int i = 0;

    while (i < size)
    {
        printf("%d\n",ft_range(start,end)[i]);
        i++;

    }
    return(0);


}

/*With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.*/