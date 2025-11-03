#include <stdio.h>

void somavalores(float *A, float *B) {
  *A = *A + *B;
}

int main(int argc, char const *argv[])
{
  float Valor1, Valor2;
  printf("Digite dois numeros: "); scanf("%f %f", &Valor1, &Valor2);
  somavalores(&Valor1, &Valor2);
  printf("Soma: %.2f", Valor1);
  return 0;
}

