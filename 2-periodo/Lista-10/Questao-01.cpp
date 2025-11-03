#include <stdio.h>
#include <stdlib.h>

int soma(char **vetor, int Tamanho) {
  int Soma = 0;
  for(int i = 1; i < Tamanho; i++) {
    Soma += atoi(vetor[i]);
  } 
  return Soma;
}

int main (int argc, char *argv[]) {
  int Soma = soma(argv, argc);
  printf("Resultado da soma: %i\n", Soma);
  return 0;
}
