#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char nome[30], letra, troca; int x,t,z,res,nl,conta;
	printf("\n\n DIGITE UM NOME: ");
	gets(nome);//Lê o numero da "casa" no vetor
	t=strlen(nome);//Lê a quantidade e a Letra da "casa" no vetor("a" é diferente de "A")
	
	printf("\n\n");
	
	printf("Digite a letra a ser inserida:\n");
	scanf(" %c",&letra);
	
	troca = 'a';
	

	for( x=t-1; x>=0 ; x-- )
		if(nome[x] == troca){
			conta++;
			printf("A letra 'a' apareceu, deseja alterar ? S/N ");
			scanf(" %c",&res);
			}
			if (res=='s'){
				printf("Qual letra deseja inserir ?");
				scanf(" %c",&nl);
				nome[x]=nl;
			}
			else{
				nome[x]=letra;
			}
	
	for( x=t-1; x>=0 ; x-- )
		printf(" %c ",nome[x]);
		printf(" \n %d ",conta);

	
	printf("\n\n");
	system("pause");
}
