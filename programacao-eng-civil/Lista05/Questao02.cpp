#include<stdio.h>

int main (){
	int Numero1, Numero2;

	printf("Escreva um numero");
	scanf("%i",&numero1);
	printf("Escreva outro numero");
	scanf("%i",&numero2);

	if (numero1>numero2){
		printf("O numero %i e maior que o numero %i", Numero1, Numero2);
	} else {
		if (numero1==numero2){
			printf("Os numeros sao iguais");
		} else{
			printf("O numero %i e menor que o numero %i", Numero2, Numero1);
		}
	}
	return 0;
}
