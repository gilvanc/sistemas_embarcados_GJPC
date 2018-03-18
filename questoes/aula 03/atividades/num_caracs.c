//#include <stdio.h>
#include "num_caracs.h"

int Num_Caracs(char *string)
{
	int i = 0;
	while (string[i] != '\0')
        i++;
	return i;
}

//TESTE PARA A FUNÇÃO Num_Caracs e verficação do EOF com fgets
/*int main()
{
	int i=0;	
	char vogais_escrito[5] = "aeiou";
	char vogais_lido[6];
	printf("Digite as vogais: ");
	fgets(vogais_lido, 6, stdin);
	printf("O numuero de vogais escritas e: %d\n", Num_Caracs(vogais_escrito));
	printf("O numuero de vogais lidas e: %d\n", Num_Caracs(vogais_lido));
	printf("As vogais sao : ");
	while (vogais_escrito[i] != '\0'){
	printf("%c", vogais_escrito[i]);        
	i++;	
	}
	printf(".\n");
	//while (vogais_lido[i] != '\0'){
	printf("As vogais lidas sao: ");	
	printf("%s", vogais_lido);        
	//i++;	
	//}
	printf(".\n");
	return 0;
}*/
