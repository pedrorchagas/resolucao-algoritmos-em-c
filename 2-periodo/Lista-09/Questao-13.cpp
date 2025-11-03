#include <stdio.h>
#include <stdlib.h>
#define TAM 20

void lerVetor(int *Vetor, int Tamanho) {
  for(int i = 0; i < Tamanho; i++) {
    printf("Digite o %io valor: ", i + 1); scanf("%i", &Vetor[i]);
  }
}

void imprimirVetor(int Vetor[], int Tamanho) {
  for(int i = 0; i < Tamanho; i++) 
    printf("%i ", Vetor[i]);
  printf("\n");
}

void inverteVetor(int *Vetor, int Tamanho) {
  int Temp;
  for(int i = 0; i < TAM / 2; i++){
    Temp = Vetor[i];
    Vetor[i] = Vetor[TAM - 1 - i];
    Vetor[TAM - 1 - i] = Temp;
  }
}

int main (int argc, char *argv[]) {
  int Vetor[TAM];
  lerVetor(Vetor, TAM);
  printf("Vetor digitado: \n");
  imprimirVetor(Vetor, TAM);
  inverteVetor(Vetor, TAM);
  printf("Vetor invertido: \n");
  imprimirVetor(Vetor, TAM);
  return 0;
}
