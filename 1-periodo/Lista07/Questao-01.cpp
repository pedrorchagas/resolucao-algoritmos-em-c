#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int NumeroA, NumeroB, NumeroC;

    printf("Escreva um número: ");
    scanf("%i", &NumeroA);
    printf("Escreva outro número número: ");
    scanf("%i", &NumeroB);
    printf("Escreva mais um número: ");
    scanf("%i", &NumeroC);

    if (NumeroA + NumeroB < NumeroC) {
        int Soma;
        Soma = NumeroA + NumeroB;
        printf("A soma de %i + %i é menor que %i\n", NumeroA, NumeroB, NumeroC);

    } else printf("A soma de %i + %i é maior ou igual a %i\n", NumeroA, NumeroB, NumeroC);

    return 0;
}