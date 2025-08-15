
#include<stdio.h>
#include<math.h>
int main() {
    float Area, Raio, teste;

    printf("Escreva o valor do raio: ");
    scanf("%f",&Raio);
    teste = M_PI;
    Area = M_PI * pow(Raio, 2);
    printf("A área total é: %.2f\n", Area);
    return 0;
}