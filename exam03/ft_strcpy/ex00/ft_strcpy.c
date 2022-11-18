/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fben-amo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:58:36 by fben-amo          #+#    #+#             */
/*   Updated: 2022/10/16 15:58:39 by fben-amo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
	char dest[10] ="ef";
	char src[] ="abcd";
	char dest2[10] ="ef";
	char src2[] ="abcd";
 
	ft_strcpy(dest,src);
	ft_putstr(dest);
	printf("\n%s",strcpy(dest2, src2));
	return(0);
}*/
