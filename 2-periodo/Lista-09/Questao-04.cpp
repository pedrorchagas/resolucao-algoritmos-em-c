#include <stdio.h>
void frac(float Numero, int *Inteiro, float *Fracionario) {
  *Inteiro = int(Numero);
  *Fracionario = Numero - *Inteiro;
}
int main(int argc, char const *argv[])
{
  float Valor, ParteFrac;
  int ParteInteira;
  printf("Digite um numero: "); scanf("%f", &Valor);
  frac(Valor, &ParteInteira, &ParteFrac);
 printf("Parte inteira: %d\nParte fracionária: %.2f", ParteInteira, ParteFrac);
  
  return 0;
}
