#include<stdio.h>


void somavalores(float *ValorA, float *ValorB) {
    *ValorA = *ValorA + *ValorB;
}


int main() {
    float ValorA, ValorB;
    printf("Informe o Valor de A: ");
    scanf("%f", &ValorA);
    printf("Informe o Valor de B: ");
    scanf("%f", &ValorB);
    somavalores(&ValorA, &ValorB);

    printf("A some é: %.2f", ValorA);
    return 0;
}