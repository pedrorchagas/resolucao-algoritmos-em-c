#include<stdio.h>
#include <math.h>

int main() {
    float Peso, Altura, IMC;

    printf("Qual é o seu peso? ");
    scanf("%f",&Peso);
    printf("Qual é a sua altura? ");
    scanf("%f",&Altura);
    Altura = pow(Altura, 2);
    IMC = Peso / Altura;

    printf("O seu IMC é: %.2f\n", IMC);
    return 0;
}