#include <stdio.h>

int main(){
	int num, s, i;
	
	printf("Digite um valor inteiro:");
	scanf("%d",&num);
	s = 0;
	while(num > 0){
		s = s + num;
		num--; //num <- num - 1
	}
	printf("A soma e %d\n", s);
}
