/*
handle the white spaces 
handle the sign 
handle the conversion
*/

#include<stdio.h>
#include<unistd.h>

int	ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;

    while (*str == 32 || (*str >= 9 && *str <= 13)) // while is an asignment ?
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = sign * (-1);
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return(result*sign);
}

int main()
{
    char str[] =  "   ----+--+1234ab567";
    printf("%d",ft_atoi(str));
    return(0);
}