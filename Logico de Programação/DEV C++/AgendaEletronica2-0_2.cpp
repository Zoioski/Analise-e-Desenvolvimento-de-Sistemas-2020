#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int opcao,opcaoo,x,tam,conn,con=1;

typedef struct{
	char nome[30];
	char endereco[100];
	int fone;
	int cep;
} pessoa;

pessoa agenda[100];

void cadastrar();
void consultar_por_nome();
void consultar_por_letra();
void lista_nomes();
	

void cadastrar(){
	printf("Seu numero sera %d\nAperte Enter para comecar\n", con);
	getchar();
	
	printf("Digite o nome %d:\n", con);
	gets(agenda[con].nome);
	
		
	printf("Digite o endereco %d:\n", con);
	gets(agenda[con].endereco);
	
	
	printf("Digite o telefone %d:\n", con);
	scanf("%d", &agenda[con].fone);
	
	
	printf("Digite o CEP %d: \n", con);
	scanf("%d", &agenda[con].cep);
		
	con++;
				
	system("cls");
}

void consultar_por_nome(){
	char nome_pes[30];
	printf("Digite o nome:\n");
	scanf("%s", &nome_pes);
	int flag = 0;
		
	for(x=0;x<con;x++){				
		if(strcmp(nome_pes,agenda[x].nome) == 0){
		printf("Nome: %s\n", agenda[x].nome);
		printf("Endereco: %s\n", agenda[x].endereco);
		printf("Telefone: %d\n", agenda[x].fone);
		printf("CEP: %d\n", agenda[x].cep);
		printf("\n");
		flag=1;
		}
	}
	if(flag==0){
		printf("Nome nao encontrado\n\n");
	}
}

void consultar_por_letra(){
	char letra;
	printf("Pesquisa pela 1 letra:\n");
	scanf("%c",&letra);
	int flag=0;
		
	for(x=0;x<con;x++){
		if(letra == agenda[x].nome[0]){
		printf("Nome: %s\n", agenda[x].nome);
		flag=1;
		}
	}
	if(flag==0){
		printf("Nome nao encontrado\n\n");
	}
}

void lista_nomes(){
	
for(x=1;x<con;x++){
	printf("Nome: %s\n", agenda[x].nome);
	}
}

int main(){
			
	inicio:
		system("cls");
		printf("1 - Cadastrar. \n2 - Mostrar perfil pelo nome. \n3 - Pesquisa do nome por letra. \n4 - Mostrar lista de nomes. \n5 - Sair");
		opcao = getch();
		switch (opcao){
			case '1' :
				system("cls");
				
				cadastrar();
				
				system("pause");
				goto inicio;
				
			case '2' :
				system("cls");
				
				consultar_por_nome();
				
				system("pause");
				goto inicio;
				
			case '3' :
				system("cls");
				
				consultar_por_letra();
				
				system("pause");
				goto inicio;
			case '5' :
				system("cls");
				printf("Ate Logo.");
				break;
				
			case '4' :
				system("cls");
				
				lista_nomes();
				
				system("pause");
				goto inicio;
				
			default :
				system("cls");
				printf("Voce deve escolher uma opcao valida\n");
				system("pause");
				goto inicio;
		}
	}
