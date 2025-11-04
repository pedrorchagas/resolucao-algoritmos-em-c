#include<stdio.h>

void frac(float Valor, float *Fracionario, int *Inteiro) {
    *Inteiro = Valor/1;
    *Fracionario = Valor - *Inteiro;
}

int main() {
    float Valor, Fracionario;
    int Inteiro;

    printf("Informe um valor: ");
    scanf("%f", &Valor);
    frac(Valor, &Fracionario, &Inteiro);

    printf("Valor: %.2f\n", Valor);
    printf("Fracionario: %.2f\n", Fracionario);
    printf("Inteiro: %d\n", Inteiro);

    return 0;
}