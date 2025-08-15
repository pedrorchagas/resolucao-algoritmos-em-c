#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int QuantidadeComprada;
    float ValorUnitario, ValorTotal;

    printf("Quantos itens foram comprados? ");
    scanf("%i",&QuantidadeComprada);
    printf("Qual é o valor unitário do produto? ");
    scanf("%f",&ValorUnitario);

    ValorTotal = ValorUnitario * QuantidadeComprada;

    printf("O valor total da compra é: R$%.2f\n", ValorTotal);
    return 0;
}