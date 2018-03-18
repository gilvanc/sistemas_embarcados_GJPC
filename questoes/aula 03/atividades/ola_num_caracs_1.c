#include <stdio.h>
#include "num_caracs.h"


int main(int argc, char **argv)
{
	int i=0;
	for(i=0;i<=argc;i++)
	{
		printf("Argumento: %s / Numero de caracteres: %d", argv[i], Num_Caracs(argv[i]));
	}	
	return 0;
}
