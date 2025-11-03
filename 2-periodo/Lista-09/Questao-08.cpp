#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 50
void imprimirVetor(int Vetor[], int Tamanho) {
  for(int i = 0; i < Tamanho; i++) 
    printf("%i ", Vetor[i]);
  printf("\n");
}

void preencheVetor(int *Vetor, int Tamanho) {
  for(int i = 0; i < Tamanho; i++)
    Vetor[i] = rand() % 100; 
}

void ordenarVetor(int Vetor[], int Tamanho) {
  int temp;
  for (int i = 0; i < Tamanho - 1; i++) {
    for (int j = 0; j < Tamanho - 1 - i; j++) {
      if (Vetor[j] > Vetor[j + 1]) {
        temp = Vetor[j];
        Vetor[j] = Vetor[j + 1];
        Vetor[j + 1] = temp;
      }
    }
  }
}

int main(int argc, char const *argv[]) {
  int Vetor[TAM];

  preencheVetor(Vetor, TAM);
  imprimirVetor(Vetor, TAM);
  ordenarVetor(Vetor, TAM);
  printf("Vetor ordenado: \n");
  imprimirVetor(Vetor, TAM);
  return 0;
}
