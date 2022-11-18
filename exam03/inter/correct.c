#include<unistd.h>

int Check_doubles(char *str , char c , int pos)
{
	int i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return(0); //false
		i++;
	}
	return(1); // correct
}

int main(int argc , char* argv[])
{
	int i = 0;
	int j ;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			j= 0;
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j] )
				{
					if (Check_doubles(argv[1] ,argv[1][i] ,i) == 1)
					{
						write(1,&argv[1][i],1);
						break;
					}
				}
				j++;
			}
		i++;
		}
	}
	write(1,"\n",1);
	return(0);
}