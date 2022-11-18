/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fben-amo <fben-amo <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:52:13 by fben-amo          #+#    #+#             */
/*   Updated: 2022/10/22 23:32:29 by fben-amo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char*argv[])
{
	int	i;

	i = argc -1;
	while (i >= 1)
	{
		ft_putstr (argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
