#include<unistd.h>
int main()
{
    write(1,"Hello World!",12);
    write(1,"\n",1);
return(0);    
}

/*
#include<unistd.h>
int main()
{
    write(1,"Hello World!\n",13);
return(0);    
}
*/