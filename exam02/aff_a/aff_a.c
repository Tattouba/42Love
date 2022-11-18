#include<unistd.h>

int main(int argc, char* argv[])
{
	int j;
	j = 0;
	if (argc == 2)//nb of parameterts = 1
	{
		while (argv[1][j] != '\0')
		{
			if (argv[1][j] == 'a')
			{	
				write(1,"a\n",2);
				return(0); // not break with break i get two spaces
			}
			j++;
		}
		write(1,"\n",1);
		return(0);
	}
	write(1,"a\n",2);
	return(0);
}

