#include<unistd.h>
int main()
{
    char c = 'z';
    char cc;
    int d = 122;
    
    while((c >= 'a') && (d >= 97))
    {
        if (d % 2 == 0)
            write(1,&c,1);
        else 
        {
            cc = c -'a' + 'A';
            write(1,&cc,1);
        }
    c--;
    d--;
    }
write(1,"\n",1);
return(0);    
}

/*Fatma don't be stupid

#include<unistd.h>
int main()
{
    write(1,"zYxWvUtSrQpOnMlKjIhGfEdCbA\n",27)
    return(0);
}
*/