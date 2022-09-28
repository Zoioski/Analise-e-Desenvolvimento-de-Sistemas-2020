#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int funcao(int parametro){
	
	//Instrução da função
	if (parametro == 1){
	int b = parametro * 2;
	return b;
}
	else if(parametro == 2){
		int b = parametro * 10;
		return b;
	}
	else{
		int b = parametro * 999;
		return b;
	}
}

int main(void){
	
	int x;
	
	//faz a chamada da função:
	printf("Digite o valor de parametro:");
	scanf(" %d", &x);
	
	int resultado = funcao(x);
	printf("Resultado: %d", resultado);
}
