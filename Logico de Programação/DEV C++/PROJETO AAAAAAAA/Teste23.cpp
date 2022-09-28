#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//732763
int main(){
	
	char url[]="ceps2.txt";
	char cidade[200], bairro[200], rua[200], ref[200], aux[200];
	unsigned long int cep=0;
	unsigned long int cep_p=0;
	FILE *arq;
	setlocale(LC_ALL, "");
	arq = fopen(url, "r");
	if(arq == NULL)
		printf("Erro, nao foi possivel abrir o arquivo\n");
	else
	strcpy(aux,"Nao Possui");
	printf("Digite o CEP a ser procurado:");
	scanf("%d", &cep_p);
	while(fscanf(arq, "%d\t%[^\t]\t", &cep, cidade) != EOF){
		if(fscanf(arq, "%[^\t]\t", bairro)=='\n'){
			strcpy(bairro,aux);
		}
		if(fscanf(arq, "%[^\t]", rua)=='\n'){
			strcpy(rua,aux);
		}
		if(fscanf(arq, "%[^\n]\n", ref)=='\n'){
			strcpy(ref,aux);
		}
		
		
		if(cep_p==cep){
			printf("--CEP: %d\n--Cidade: %s\n--Bairro: %s\n--Rua: %s\n--Refer.: %s\n\n", cep, cidade, bairro, rua, ref);
			system("pause");
		}
	}
	fclose(arq);
	return 0;
}
