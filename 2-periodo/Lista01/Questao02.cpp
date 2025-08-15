#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float Valor1, Valor2, Valor3, Valor4, Valor5, Valor6, Valor7, Valor8, ValorTotal;
    int Unidades1, Unidades2, Unidades3, Unidades4, Unidades5, Unidades6, Unidades7, Unidades8;

    printf("informe o valor e a quantidade\n");
    scanf("%f %i", &Valor1, &Unidades1);
    scanf("%f %i", &Valor2, &Unidades2);
    scanf("%f %i", &Valor3, &Unidades3);
    scanf("%f %i", &Valor4, &Unidades4);
    scanf("%f %i", &Valor5, &Unidades5);
    scanf("%f %i", &Valor6, &Unidades6);
    scanf("%f %i", &Valor7, &Unidades7);
    scanf("%f %i", &Valor8, &Unidades8);

    ValorTotal = Valor1 * Unidades1 + Valor2 * Unidades2 + Valor3 * Unidades3 + Valor4 * Unidades4 + Valor5 * Unidades5 + Valor6 * Unidades6 + Valor7 * Unidades7 + Valor8 * Unidades8;

    printf("\nValor total: %.2f\n", ValorTotal);
    printf("\nProdutos que foram comprados além de 5 unidades:\n");
    if (Unidades1 > 5) printf("Valor 1 produto: %.2f\n", Valor1);
    if (Unidades2 > 5) printf("Valor 2 produto: %.2f\n", Valor2);
    if (Unidades3 > 5) printf("Valor 3 produto: %.2f\n", Valor3);
    if (Unidades4 > 5) printf("Valor 4 produto: %.2f\n", Valor4);
    if (Unidades5 > 5) printf("Valor 5 produto: %.2f\n", Valor5);
    if (Unidades6 > 5) printf("Valor 6 produto: %.2f\n", Valor6);
    if (Unidades7 > 5) printf("Valor 7 produto: %.2f\n", Valor7);
    if (Unidades8 > 5) printf("Valor 8 produto: %.2f\n", Valor8);

    system("pause");

    return 0;
}