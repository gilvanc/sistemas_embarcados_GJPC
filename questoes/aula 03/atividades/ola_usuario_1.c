#include <stdio.h>

int main()
{
	char nome[10];	
	printf("Digite o seu nome: ");
	fgets(nome,10, stdin);
	printf("Ola %s\n", nome);
	return 0;
}
