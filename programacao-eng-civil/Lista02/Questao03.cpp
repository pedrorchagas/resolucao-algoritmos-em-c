#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define PI 3.14

int main() {
    float Raio, Area, Volume;

    printf("Informe o valor do raio: ");
    scanf("%f", &Raio);

    Volume = 4/3*PI*pow(Raio, 3);
    Area = 4*PI*pow(Raio,2);

    printf("O volume da esfera é %.2f\n", Volume);
    printf("O area do circulo é %.2f\n", Area);

    return 0;
}