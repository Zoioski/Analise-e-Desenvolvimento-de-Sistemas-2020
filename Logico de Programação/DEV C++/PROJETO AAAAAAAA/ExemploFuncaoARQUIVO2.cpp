#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h> //Biblioteca para definir idiomas

int linha=0;
char palavra;
void LeArquivo(char url[]){
	
	char letra;
	//Cria variável que armazena o caonteúdo do arquivo
	
	FILE *arquivo;

	arquivo = fopen(url, "r");//Abre o arquivo para leitura "read"
	if(arquivo == NULL){
		printf("Erro! Nao foi possivel abrir o arquivo\n");
		return ;
	}
	printf("Digite a palavra:");
	scanf("%s", palavra);
	
	fprintf(arquivo, "%s", palavra);
	
	fclose(arquivo); //Fecha arquivo
	
	
}

main (void){
	//Configura a saida de caracteres esperciais (acentos)
	setlocale(LC_ALL, "Portuguese");
	//Abre o arquivo e escreve na tela
	LeArquivo("arquivo.txt");
}
