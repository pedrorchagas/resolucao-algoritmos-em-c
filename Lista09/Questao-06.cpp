#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float Quantidade=0, ValorUnitario=0, ValorTotal=0;

    while (1) {
        printf("Quantidade: ");
        scanf("%f", &Quantidade);
        if (Quantidade <= 0){
            break;
        }

        printf("Preço: ");
        scanf("%f", &ValorUnitario);
        if (ValorUnitario <= 0){
            break;
        }
        
        ValorTotal+= ValorUnitario * Quantidade;
        
    }


    printf("Total da Nota: R$%.2f\n", ValorTotal);


    return 0;
}