#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int dia, mes, ano;
	
	printf("Digite o dia que voce nasceu\n");
		scanf("%d", &dia);
	
	if((dia < 1)||(dia > 31))
	{
		printf("Voce digitou um dado invalido\n");
		return 8;	
	}
	
	printf("Digite o mes que voce nasceu\n");
		scanf("%d", &mes);
		
	if((mes < 1)||(mes > 12))
	{
		printf("Voce digitou um dado invalido\n");
		return 17;
	}
	
	printf("Digite o ano que voce nasceu\n");
		scanf("%d", &ano);
	
	if(ano < 1000)
	{
		printf("Voce digitou um dado invalido\n");
		return 26;
	}
	
	if(2019-ano > 18)
	{
		printf("Voce tem mais de 18 anos");
	}
	else if(2019-ano < 18)
	{
		printf("Voce tem menos de 18 anos");
	}
	
}
