#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int opcao,x,tam,conn,con=1;
char nome[30][30];
char endereco[30][100];
char fone[30][20];
char cep[30][20];

void cadastrar();
void consultar_por_nome();
void consultar_por_letra();
void lista_nomes();
	

void cadastrar(){
	printf("Seu numero sera %d\nAperte Enter para comecar\n", con);
	getchar();
	conn = 0;
	while(conn < 1){
	printf("Digite o nome %d:\n", con);
	gets(nome[con]);
	tam = strlen(nome[con]);
	
		
	printf("Digite o endereco %d:\n", con);
	gets(endereco[con]);
	
	
	printf("Digite o telefone %d:\n", con);
	gets(fone[con]);
	
	
	printf("Digite o CEP %d: \n", con);
	gets(cep[con]);
			
			
	conn++;
	con++;
			
			
	system("cls");
	}
}

void consultar_por_nome(){
	char nome_pes[30];
	printf("Digite o nome:\n");
	gets(nome_pes);
	tam = strlen(nome_pes);
	
	for(x=0;x<con;x++){				
		if(strcmp(nome_pes,nome[x]) == 0){
		printf("Nome: %s\n", nome[x]);
		printf("Endereco: %s\n", endereco[x]);
		printf("Telefone: %s\n", fone[x]);
		printf("CEP: %s\n", cep[x]);
		printf("\n");
		}
	}			
}

void consultar_por_letra(){
	char letra;
	printf("Pesquisa pela 1 letra:\n");
	scanf("%c",&letra);
		
	for(x=0;x<con;x++){
		if(letra == nome[x][0]){
		printf("Nome: %s\n", nome[x]);
		}
	}
}

void lista_nomes(){
	
for(x=1;x<con;x++){
	printf("Nome: %s\n", nome[x]);
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
				printf("Ate logo.");
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
