#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Territorio
{
	char nome[30];
	char cor[10];
	int tropas;
};
int main(){
	struct Territorio t[5];
	int c;
	for(c=0;c<5;c++){
		printf("Informe o nome do Territorio: ");
		scanf("%s",t[c].nome);
		
		printf("Informe a cor do Territorio: ");
		scanf("%s",t[c].cor);
		
		printf("Informe a quantidade de tropas do Territorio: ");
		scanf("%d",&t[c].tropas);
		system("cls");
	}
	for(c=0;c<5;c++){
		printf("\nTerritorio %d:\n", c+1);
		printf("Nome: %s\n", t[c].nome);
		printf("Cor: %s\n", t[c].cor);
		printf("Tropas: %d", t[c].tropas);
	}
	return 0;
}