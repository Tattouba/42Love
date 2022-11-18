#include<unistd.h>
#include<stdio.h>

int		Check_doubles(char *str, char c, int pos)
{
	int i = 0;

	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		rm_doubledouble(char *str, char c)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void ft_union(char *str1 , char *str2)
{
	int i = 0;
	int j;
	while (str1[i] != '\0')
    {
        if (Check_doubles(str1, str1[i] ,i) == 1)
            write(1,&str1[i],1);
        i++;
    }
    j = 0;
    while(str2[j] != '\0') // will print all the second part
    {
        if (rm_doubledouble(str1 ,str2[j]) == 1) // harf hetha mouch mawjoud f string louel
        {
            if (Check_doubles(str2 , str2[j], j) == 1)
                write(1,&str2[j],1);
        }
        j++;
    }
}

int main(int argc , char* argv[])
{
	if (argc == 3) 
        ft_union(argv[1], argv[2]);
    write(1,"\n",1);
	return(0);
}







