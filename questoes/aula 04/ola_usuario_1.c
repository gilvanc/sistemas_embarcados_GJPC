#include <stdio.h>
#include <string.h>

int main ()
{
	FILE *fp;
	char nome[50], nome_arq[20], idade[3];
	int i=0;

	printf("Digite seu nome: ");
	fgets(nome,50,stdin);
	//fpurge(stdin);

	/*while (nome[i] != ' ')
	{
		nome_arq[i] = nome[i];
		i++;
	}
	nome_arq[i] = '.';
	nome_arq[++i] = 't';
	nome_arq[++i] = 'x';
	nome_arq[++i] = 't';
	printf("nome do arquivo: %s\n", nome_arq);*/

	printf("Digite sua idade: ");
	fgets(idade,3,stdin);
	//fpurge(stdin);

	fopen("Eu.txt", "w");
	fputs(nome,fp);
	printf("ponto1\n");
	//fputs("Nome: ",fp);
	fputs(nome,fp);
	fputs("\n",fp);
	//fputs("Idade: ",fp);
	fputs(idade,fp);
	//fputs(" anos\n",fp);
	fclose(fp);
	printf("\n");

	return 0;
}
