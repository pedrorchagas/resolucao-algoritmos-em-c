#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char TipoCombustivel;
    float ValorGasolina, ValorEtanol, LitrosAbastecidos, ValorTotal, Desconto, ValorPago;
    ValorGasolina = 7.21;
    ValorEtanol = 4.69;
    printf("Digite a quantidade de litros abastecidos: ");
    scanf("%f", &LitrosAbastecidos);
    printf("Digite o tipo do combustível (Gasolina-G Etanol-E): ");
    fflush(stdin);
    scanf("%c", &TipoCombustivel);
    switch (TipoCombustivel)
    {
    	case 'g':
    	case 'G': if (LitrosAbastecidos<21)
    	          {
    	          	ValorTotal = ValorGasolina*LitrosAbastecidos;
    	          	Desconto = ValorTotal*0.04;
    	          	ValorPago = ValorTotal - Desconto;
    	          	printf("Total a pagar com desconto:  %.2f\n", ValorPago);
    	          	break;
    	          }
    	          else
    	          {
    	          	ValorTotal = (ValorGasolina*LitrosAbastecidos);
    	          	Desconto = ValorTotal*0.06;
    	          	ValorPago = ValorTotal - Desconto;
    	          	printf("Total a pagar com desconto:  %.2f\n",ValorPago);
    	          	break;
    	          }
    	case 'e':
    	case 'E': if (LitrosAbastecidos<21)
    	          {
    	          	ValorTotal = (ValorEtanol*LitrosAbastecidos);
    	          	Desconto = ValorTotal*0.03;
    	          	ValorPago = ValorTotal - Desconto;
    	          	printf("Total a pagar com desconto:  %.2f\n",ValorPago);
    	          	break;
    	          }
    	          else
    	          {
    	          	ValorTotal = (ValorEtanol*LitrosAbastecidos);
    	          	Desconto = ValorTotal*0.05;
    	          	ValorPago = ValorTotal - Desconto;
    	          	printf("Total a pagar com desconto:  %.2f\n",ValorPago);
    	          	break;
			     }
		default: printf("Combustível não identificado, digite novamente!");
		         break;
    }
	return 0;	
}
