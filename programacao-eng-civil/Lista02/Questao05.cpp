#include<stdlib.h>
#include<stdio.h>

int main() {
    float TempoGasto, Velocidade, Distancia, LitrosNecessarios;

    printf("Informe a velocidade\n");
    scanf("%f", &Velocidade);
    printf("Informe o tempo gasto\n");
    scanf("%f", &TempoGasto);

    Distancia = Velocidade * TempoGasto;
    LitrosNecessarios = Distancia/12;

    printf("Será necessário %.2fL de gasolina para realizar a viagem\n", LitrosNecessarios);

    return 0;
}