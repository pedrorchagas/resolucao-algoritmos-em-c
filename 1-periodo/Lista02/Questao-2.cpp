#include<stdio.h>

int main() {
    float numero1, numero2, numero3, resultado;
    printf("Escreva um número: ");
    scanf("%f",&numero1);
    printf("Escreva outro número: ");
    scanf("%f",&numero2);
    printf("Escreva mais um número: ");
    scanf("%f",&numero3);

    resultado = numero1 * numero2 * numero3;
    printf("O resultado da multiplicação é: %2.f\n", resultado);
    return 0;
}