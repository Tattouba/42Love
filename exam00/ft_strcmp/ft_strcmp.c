/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fben-amo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:45:41 by fben-amo          #+#    #+#             */
/*   Updated: 2022/10/13 21:45:45 by fben-amo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
		strcmp(str1,str2);
		0 = the two strings are equal
	 >0 = str1  less than str2
	 <0 = str1 greater than str2

*/
/*
sizeof(R), break, continue , return are not fuction
*/
#include<unistd.h>
#include<stdio.h>
#include<unistd.h>
#include<stdio.h>
int    ft_strcmp(char *s1, char *s2)
{
		int i;
		int j ;
		int result;

		i=0;
		j=0;
		while(i <= sizeof(s1) && (j <= sizeof(s2)))
		{
			if (s1[i] == s2[j])
			{
				result = s1[i] -s2[j];
			}
			else 
			{
				result = s1[i] - s2[j];
				return(result);
			}
		j++;
		i++;
		}
return(result);
}
int main()
{
		char *s1 = "fatma";
		char *s2 = "fatm";
		int r = ft_strcmp(s1,s2);
		printf("%d",r);
return(0);
}


/* other simple solution 

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i=0;
	while(s1[i] != '\0' && s2[i] != '\0')
		i++;
return(s1[i] - s2[i])
}
*/
