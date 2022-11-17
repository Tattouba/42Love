/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fben-amo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:09:15 by fben-amo          #+#    #+#             */
/*   Updated: 2022/10/30 10:09:17 by fben-amo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_stock_str.h"
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		l;

	i = 0;
	l = ft_strlen(src) + 1;
	new = (char *)malloc(sizeof(char) * l);
	if (!new)
		return (0);
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc (sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}

/*int	main(int argc, char **argv)
{
	int	index;

	t_stock_str	*array;
	array = ft_strs_to_tab(argc, argv);
	index = 1;
	while (index < argc)
	{
		printf("%d\n", index);
		printf(" src: %s\n",array[index].str);
		printf(" copied: %s\n", array[index].copy);
		printf("\nsize :%d\n", array[index].size);
		index++;
	}
}*/
