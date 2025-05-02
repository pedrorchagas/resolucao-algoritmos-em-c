
#include <stdio.h>
int main() {
    float Base, Altura, Area;

    printf("Qual é a base do triângulo? ");
    scanf("%f",&Base);
    printf("Qual é a altura do triângulo? ");
    scanf("%f",&Altura);

    Area = (Base * Altura) /2;

    printf("A área do trinângulo é: %.2f\n", Area);
    return 0;
}