#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 20
void imprimirVetor(int *Vetor, int Tamanho) {
  for(int i = 0; i < Tamanho; i++) 
    printf("%i ", Vetor[i]);
  printf("\n");
}

void preencheVetor(int *Vetor, int Tamanho) {
  for(int i = 0; i < Tamanho; i++)
    Vetor[i] = rand() % 100; 
}

int somaVetor(int *Vetor, int Tamanho) {
  int Soma = 0;
   for(int i = 0; i < Tamanho; i++)
    Soma += Vetor[i];
    return Soma;
}

int main(int argc, char const *argv[]){
  int Numeros[TAM], NumerosPares;
  preencheVetor(Numeros, TAM);
  imprimirVetor(Numeros, TAM);
  printf("Soma dos elementos: %i", somaVetor(Numeros, TAM));
  return 0;
}


