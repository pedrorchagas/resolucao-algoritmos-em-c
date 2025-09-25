#include<stdio.h>
#include<stdlib.h>

int main() {
    int X, Y;
    printf("Escreva o valor de X: ");
    scanf("%i", &X);

    printf("Escreva o valor de Y: ");
    scanf("%i", &Y);

    X=Y*X;
    Y=X/Y;
    X=X/Y;

    printf("O Novo valor de X é %i\n", X);
    printf("O Novo valor de Y é %i\n", Y);
    return 0;
}