#include <stdio.h>

int main()
{
	char ola[11] = "Ola mundo! ";	
	FILE *fp;
	fp = fopen("ola_mundo.txt", "w");
	if (!fp)
		printf("Erro na criação do arquivo.");
	printf("%s\n", ola);
	fputs(ola,fp);
	putc('\n',fp);
	fclose(fp);
	return 0;
}
