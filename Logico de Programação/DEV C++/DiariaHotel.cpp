#include <stdio.h>


int main()
{
	char nome;
	float diaria, conta;
	
	printf("Digite seu nome:");
	scanf("%s", &nome);
	
	printf("Quantos dias voce ficou no hotel:");
	scanf("%f", &diaria);
	
	if (diaria < 15){
		conta = diaria * 60 + 5.50;
		printf("Nome: %s\n",nome);
		printf("Quantia a pagar: %f\n", conta);
	}
}
