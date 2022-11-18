/*
from A ---> a
char s ; 
s = s -'A' + 'a';

from a ---> A
char s ; 
s = s -'a' + 'A';
*/
#include<unistd.h>

int main()
{
    int c = 'a';
    int d = 97; // valeur initial
    char cprint;
    
    while((c <= 'z') && (d<= 122))
    {
        if ((d % 2) == 0)
        {
            cprint = c - 'a' + 'A';
            write(1,&cprint,1);
        }
        else
            write(1,&c,1);
    c++;
    d++;
    }
write(1,"\n",1);
return(0);    
}
/*Fatma don't be stupid

#include<unistd.h>
int main()
{
    write(1,"aBcDeFgHiJkLmNoPqRsTuVwXyZ\n",27)
    return(0);
}
*/