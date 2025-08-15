#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int Num1, Num2, Num3, Num4, Num5, Num6, NumMaior=0, X;
    printf("Escreva 6 números inteiros\n");
    scanf("%i %i %i %i %i %i", &Num1, &Num2, &Num3, &Num4, &Num5, &Num6);

    if (Num1 > NumMaior) NumMaior = Num1;
    if (Num2 > NumMaior) NumMaior = Num2;
    if (Num3 > NumMaior) NumMaior = Num3;
    if (Num4 > NumMaior) NumMaior = Num4;
    if (Num5 > NumMaior) NumMaior = Num5;
    if (Num6 > NumMaior) NumMaior = Num6;

    printf("\nO maior número é %i\n\n", NumMaior);
    system("pause");
    return 0;
}
