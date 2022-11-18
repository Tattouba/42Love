#include<stdio.h>
#include<unistd.h>

int		check_start(char *str, int pos)
{
	int i;
    int lastindex = -1;

	i = 0;
	while (str[i] != '\0' && i < pos) // i < l 
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			lastindex = i;
		}
		i++;
	}
	lastindex++;
	return (lastindex);
}

int main(int argc , char* argv[])
{
	int stop = 0;
	int i = 0;
	int start ;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			i++;
		}
		i--; //to get to the last index
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;//end
		stop = i; //11
		start = check_start(argv[1],stop); //7
		while(start <= stop)
		{
			write (1,&argv[1][start],1);
			start++;
		}
	}
	write(1,"\n",1);
	return(0);
}

/*int main()
{
	char str[] = "FOR my  PONY  ";
	int r = check_start(str, 10);
	printf("%d",r); //7
	return(0);
}*/
