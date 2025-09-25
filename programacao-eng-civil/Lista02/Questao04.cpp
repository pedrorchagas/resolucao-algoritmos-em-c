#include<stdio.h>
#include<stdlib.h>


int main() {
    float Comprimento, Largura, Altura, AreaTotal, QntCaixas;


    printf("Informe o comprimento da sala: ");
    scanf("%f", &Comprimento);
    printf("Informe a Largura da sala: ");
    scanf("%f", &Largura);
    printf("Informe a Altura da sala: ");
    scanf("%f", &Altura);

    AreaTotal += Comprimento * Altura * 2;
    AreaTotal += Largura * Altura * 2;

    QntCaixas = AreaTotal/1.5;

    printf("Para preencher a sala será necessário usar %.2f caixas de ladrilho", QntCaixas);
    return 0;
}