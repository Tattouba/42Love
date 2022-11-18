#include<stdlib.h>
#include<unistd.h>
#include <stdio.h>

int check_sep(char c)
{
	if (c == 9 || c == 10 || c == 32)
		return (1);
	if (c == 0) //nn terminator , empty string
		return(1);
	return(0);
}

int count_words(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i] != '\0')
	{
		while(str[i] != '\0' && check_sep(str[i]))
			i++;
		if(str[i] != '\0')
			count++;
		while(str[i] != '\0' && !check_sep(str[i]))
			i++;
	}
	return(count);
}

int ft_length_word(char *str)
{
	int i = 0;
	while(str[i] && !check_sep(str[i]))
		i++;
	return(i);
}

char *ft_oneDboxes(char *str)
{
	int i;
	int sizebox;
	char *array;

	i = 0;
	sizebox = ft_length_word(str); //nn terminator
	array = (char*)malloc(sizeof(char) * (sizebox + 1));
	while(i < sizebox)
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
	return(array);
}

char	**ft_split(char *str)
{
	
	char **string;
	int i;

	i = 0;
	string = (char**)malloc((count_words(str) + 1) * sizeof(char*));
	if(!string)
		return(0);
	while(*str != '\0')
	{
		while(*str != '\0' && check_sep(*str))
			str++;
		if(*str != '\0')
		{
			string[i] = ft_oneDboxes(str);
			i++;
		}
		while(*str != '\0' && !check_sep(*str))
			str++;
	}
	string[i] = 0;
	return(string);
}

// int main(int argc , char* argv[])
// {
// 	char **spilt;
// 	int i;
	
// 	if (argc == 2)
// 	{
// 		spilt = ft_split(argv[1]);
// 		while(spilt[i])
// 		{
// 			printf("%s\n",spilt[i]);
// 			i++;

// 		}
// 	}
// 	return(0);
// }


// int main()
// {
// 	int i = 0;
// 	while( i <= 3)
// 	{
// 		printf("%s\n", ft_split("fatma ben amor")[i]);
// 		i++;
// 	}
//     //printf("%p", ft_split("fatma ben amor")[3]);
// 	return(0);
// }

int main(int argc, char **argv)
{
	(void)argc;
	char **array;
	array = ft_split(argv[1]);
	printf("%s\n", array[0]);
	printf("%s\n", array[1]);
	printf("%s\n", array[2]);
	printf("%p\n", array[3]);

}