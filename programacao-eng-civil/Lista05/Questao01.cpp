#include<stdio.h>

int main(){
	int Numero;

	printf("Escreva um numero");
	scanf("%i",&Numero);

	if (numero>0){
		printf("O numero e positivo ");
	} else {
		if (numero==0){
			printf("O numero e neutro");
		}
		else{
			printf("O numero e negativo");
		}
	}
	 
	return 0;
}
