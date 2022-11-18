#include<unistd.h>

int main(int argc, char* argv[])
{
	(void)argc; //cool syntaxe to tell the compiler not to complain about unused variables.
	(void)argv;
	write(1,"z\n",2);	

	return(0);
}
