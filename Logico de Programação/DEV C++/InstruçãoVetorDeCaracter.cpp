#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char nome[30], letra[1]; int x,t,conta,letra_nova;
	printf("\n\n DIGITE UM NOME: ");
	gets(nome);//Lê o numero da "casa" no vetor
	t=strlen(nome);//Lê a quantidade e a Letra da "casa" no vetor("a" é diferente de "A")
	printf("\n\n");
	for(x=t-1;x>=0;x--)
		printf(" %c",nome[x]);
		
		printf("Qual letra sera trocada:");
		scanf("%c",letra)
	if(nome[x]==a){
		conta=conta+1;
		nome[x]=letra_nova;
	}
	printf("\n\n");
	system("pause");
	
}
