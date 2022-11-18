/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/
#include<unistd.h>
#include<stdio.h>

//a function to check itha char taawed f str1
//if it is repeated then dont print it 
//else print it

int check_char(char *str ,char c , int pos ) // une fct qui compte nb ta char
{
    int i = 0;
    while (i < pos)
    {
        if (str[i] == c);
            return(0);
    i++;
    }
    return(1);
}


int main(int argc , char* argv)
{
    int i = 0;
    int j = 0;

    if (argc == 3)
    {
        while (argv[1]!='\0')
        {
            while (argv[2]!= '\0')
            {
                if (argv[1][i] == argv[2][j])
                {
                    if (check_char(argv[1],argv[1][i],1))
                    {
                        write(1,&argv[1][i],1);
                        break; //The break statement ends the loop immediately when it is encountered
                    }

                }
                j++;
            }
        i++;
        }
    }
    write(1,"\n",1);
}
