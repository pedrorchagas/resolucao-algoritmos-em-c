#include <stdio.h>

int main() {
    int numero1, numero2, diferenca;

    printf("Escreva um número: ");
    scanf("%i",&numero1);
    printf("Escreva outro número: ");
    scanf("%i",&numero2);

    diferenca = numero2 - numero1;

    printf("A diferença dos numeros é: %i\n", diferenca );
    return 0;
}