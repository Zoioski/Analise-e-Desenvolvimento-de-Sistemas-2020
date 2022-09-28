#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n1, n2;
	
	printf("Digite o primeiro numero:\n");
		scanf("%d", &n1);
	
	printf("Digite o segundo numero:\n");
		scanf("%d", &n2);
		
		system("cls");
			
	float escolha, resultado;
		
	printf("Escolha umas das opções abaixo:\n");
	printf("1 - Adicao\n");
	printf("2 - Substracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	printf("5 - Potenciacao\n");
		scanf("%f", &escolha);
		
	system("cls");
		
		
	if(escolha==1)
	{
		resultado = n1 + n2;
		printf("Resultado da Adicao: %f", resultado);
	}
	else if(escolha==2)
	{
		resultado = n1 - n2;
		printf("Resultado da Subtracao: %f", resultado);
	}
	else if(escolha==3)
	{
		resultado = n1 * n2;
		printf("Resultado da Multiplicacao: %f", resultado);
	}
	else if(escolha==4)
	{
		resultado = n1 / n2;
		printf("Resultado da Divisao: %f", resultado);
	}
	else if(escolha==5)
	{
		resultado = n1 ^ n2;
		printf("Resultado da Potenciacao: %f", resultado);
	}
	else
	{
		printf("Escolha invalida.");
	}
	
}
