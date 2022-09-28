#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{
	//menu
	int opcao;
	inicio: //inicio não é uma instrução, é apenas identificacao da linha '8' .
	system("cls");
	system("color FC");
	printf("1 - JOGAR \n2 - RANKINGS \n3 - CREDITOS \n4 - SAIR\n");
	opcao = getch();
	switch (opcao) {
		case '1':
			system("cls");
			printf("GAME\n");
			break;
		case '2':
			system("cls");
			printf("Rankings\n");
			break;
		case '3':
			system("cls");
			printf("Creditos\n");
			break;
		case '4':
			system("cls");
			printf("Voce pediu para sair, pressione qualquer tecla\n");
			break;
		default:
			system("cls");
			printf("Voce deve escolher uma opcao valida\n");
			printf("Pressione qualquer tecla para voltar\n");
			system("pause");
			goto inicio;
			
	}
		
}
