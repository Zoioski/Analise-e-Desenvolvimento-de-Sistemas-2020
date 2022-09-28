#include <stdio.h>

int main(void)
{
		int numero;
	scanf("%d", &numero);
	
	if(numero > 10)
	{
		printf("Voce digitou um numero maior do que 10");
	}
	else if(numero < 10)
	{
		printf("Voce digitou um numero menor do que 10");
	}
	else
	{
		printf("Voce digitou o numero 10");
	}
	
	return 0;

}

