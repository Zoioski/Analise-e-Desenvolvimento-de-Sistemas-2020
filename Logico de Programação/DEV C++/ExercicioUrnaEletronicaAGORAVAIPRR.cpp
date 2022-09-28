#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
main()
{
	//menu
	int opcao,voto,b,n,c1,c2,c3,x,nc1,nc2,nc3; 
	char cand1[30],cand2[30],cand3[30];
	
	c1 = 0;
	c2 = 0;
	c3 = 0;
	
		printf("------------------------------------\n");
		printf("Digite o nome do candidato 1 :\n ");
		printf("------------------------------------\n");
		scanf(" %s", cand1);
		getchar();
		nc1 :
		printf("Digite o numero dele :\n");
		printf("------------------------------------\n");
		scanf(" %d",&nc1);
		if(nc1<10){
			printf("O numero do candidato deve ter 2 digitos \n\n");
			goto nc1;
		}
		system("pause");
		system("cls");
		
		printf("------------------------------------\n");
		printf("Digite o nome do candidato 2 :\n ");
		printf("------------------------------------\n");
		scanf(" %s", cand2);
		nc2 :
		printf("Digite o numero dele :\n");
		printf("------------------------------------\n");
		scanf(" %d",&nc2);
		getchar();
		if(nc2<10){
			printf("O numero do candidato deve ter 2 digitos \n\n");
			goto nc2;
		}
		system("pause");
		system("cls");
		
		printf("------------------------------------\n");
		printf("Digite o nome do candidato 3 :\n ");
		printf("------------------------------------\n");
		scanf(" %s", cand3);
		nc3 :
		printf("Digite o numero dele :\n");
		printf("------------------------------------\n");
		scanf(" %d",&nc3);
		getchar();
		if(nc3<10){
			printf("O numero do candidato deve ter 2 digitos \n\n");
			goto nc3;
		}
		system("pause");
		system("cls");
		
	
	inicio: //inicio não é uma instrução, é apenas identificacao da linha '8' .
	system("cls");
	system("color FC");
	printf("1 - Lista de Candidatos \n\n2 - VOTAR \n\n3 - Placar dos votos \n\n4 - SAIR\n\n");
	opcao = getch();
	switch (opcao) {
		case '1':
			system("cls");
			printf("------------------------------------\n");
			
			printf("Candidato %s : Vote %d\n",cand1,nc1);
				
			printf("Candidato %s : Vote %d\n",cand2,nc2);
				
			printf("Candidato %s : Vote %d\n",cand3,nc3);
				
			printf("------------------------------------\n");
			system("pause");
			goto inicio;
		case '2':
			voto:
			system("cls");
			printf("Digite o numero do candidato:\n");
			printf("Voto em Branco : 01\n");
			printf("Voto em Nulo : 02\n");
			
			scanf(" %d",&voto);
			
			if(voto==nc1){
				c1=c1+1;
			}
			else if(voto==nc2){
				c2=c2+1;
			}
			else if(voto==nc3){
				c3=c3+1;
			}
			else if(voto==01){
				b = b+1;
			}
			else if(voto==02){
				n = n+1;
			}
			else{
				system("cls");
				printf("Opçao Invalida\n");
				printf("Pressione qualquer tecla para voltar\n");
				system("pause");
				goto voto;
			}
			goto inicio;
		case '3':
			system("cls");
			printf("------------------------------------\n");
			printf("Candidato %s tem %d\n",cand1,c1);
			printf("Candidato %s tem %d\n",cand2,c2);
			printf("Candidato %s tem %d\n",cand3,c3);
			printf("Votos em Branco : %d\n",b);
			printf("Votos Nulos : %d\n",n);
			printf("------------------------------------\n");
			system("pause");
			goto inicio;
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
