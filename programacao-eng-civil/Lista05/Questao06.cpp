#include<stdio.h>

int main(){
	int VarA, VarB, VarC, Escolha;

	printf("Informe um valor para A");
	scanf("%i",&VarA);
	printf("Informe um valor para B");
	scanf("%i",&VarB);
	printf("Informe um numero para escolher uma operacao , 1.Adicao, 2.Subtracao, 3.Divisao, 4.Multiplicacao");
	scanf("%i",&Escolha);

	if (operacao==1){
		VarC = VarA + VarB;
	}else {
		if (operacao==2){
			VarC = VarA - VarB;
		}
		else{
			if (operacao==3){
				VarC = VarA / VarB;
			}
			else{
				VarC = VarA *Var B;
			}
		}
	}

	printf("O resultado e %i",VarC);

	return 0 ; 	
}

