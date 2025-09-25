#include<stdio.h>

int main() {
    int Valor, Sucessor;

    printf("Informe um valor para receber o sucessor: ");
    scanf("%i", &Valor);

    Sucessor = (Valor + 1) % 61;

    printf("O sucessor é: %i", Sucessor);
    return 0;
}