#include<stdio.h>
#include<stdlib.h>

int main() {
    int Numero, Validar;

    printf("Escreva um número para ser testado: ");
    scanf("%i", &Numero);

    Validar = Numero % 5;

    if (Validar) {
        printf("O valor não é multiplo de 5");
    } else {
        printf("O valor é multiplo de 5");
    }

    return 0;
}