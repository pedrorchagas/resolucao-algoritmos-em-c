#include<stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    float Numero1, Numero2, Numero3, Numero4, Numero5, Resultado;
    printf("Escreva 5 números: ");
    scanf("%f",&Numero1);
    scanf("%f",&Numero2);
    scanf("%f",&Numero3);
    scanf("%f",&Numero4);
    scanf("%f",&Numero5);

    Resultado = Numero1 + Numero2 + Numero3 + Numero4 + Numero5;

    printf("O resultado da soma desses 5 números é: %1.f\n", Resultado);
    return 0;
}