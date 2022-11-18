#include<unistd.h>
#include<stdio.h>
#include<string.h>

char    *ft_strcpy(char *s1, char *s2) //*s1 = dest  *s2 =src 
{
	int i;

	i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s2);
}

/*int main()
{
	char dest[10] = "abc";
	char src[10] = "fatma";

	char dest1[10] = "abc";
	char src1[10] = "fatma";

	printf("%s\n",ft_strcpy(dest, src));
	printf("%s\n",strcpy(dest1, src1));
	return(0);	
}*/