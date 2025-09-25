#include<stdio.h>

int main (){
	int VarA , VarB , VarC;

	printf("Informe um valor");
	scanf("%i",&VarA);
	printf("Informe outro valor");
	scanf("%i",&VarB);
	printf("Informe mais outro valor");
	scanf("%i",&VarC);

	if (VarA + VarB > VarC){
		printf("O numero de a+b e maior que o numero c");
	} else {
		if (VarA + VarB == VarC){
			printf("A soma e igual c");
		} else{
			printf("A soma e menor que c");
		}
	}
	return 0 ; 
}
