#include<stdio.h>

int main (){
	int Numero;

	printf("informe um numero");
	scanf("%d",&Numero);

	if (Numero % 2 == 0){
		printf("O numero e par");
	} else {
		printf("O numero e impar");
	}
	
	return 0; 
}

