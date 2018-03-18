#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{	
	int i;	
	char args[argc];
	printf("Argumentos = ");	
	for (i=1; i<argc;i++)
	printf("%s ", argv[i]);
	printf("\n");
	return 0;
}
