#include <stdio.h>

int main (){
	for ( int i = 1; i <= 20 ; i++ ){ //for(--1-- ; --2-- ; --3--)
		if ( i == 2 ) continue;      // 1 = inicio // 2 = final // 3 = (passo = 1) ou (Sequencia da variavel)
		if ( i == 5 ) break;        // 1 = (para i de 1) // 2 = (até 20) // 3 = (i = i + 1)
		printf("i = %d\n",i);
	}
}
