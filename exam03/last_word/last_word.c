#include<unistd.h>
#include<stdio.h>

int main(int argc , char* argv[])
{
	int j ;
	if (argc == 2)
	{
		j = 0;
		while (argv[1][j] !='\0')
			j++;
		j--; // start from the end not from the nn terminator
		while(argv[1][j] <= 32 && j > 0) //apatir de 33 code asci de printable
			j--;
		while(argv[1][j] > 32)
			j--;
		j++;
		while(argv[1][j] > 32)
		{
			write(1,&argv[1][j],1);
			j++;
		}
	}
	write(1,"\n",1);
	return(0);
}
