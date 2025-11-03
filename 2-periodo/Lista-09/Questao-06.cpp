#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 15
void imprimirVetor(int *Vetor, int Tamanho) {
  for(int i = 0; i < Tamanho; i++) 
    printf("%i ", Vetor[i]);
  printf("\n");
}

void preencheVetor(int *Vetor, int Tamanho) {
  for(int i = 0; i < Tamanho; i++)
    Vetor[i] = rand() % 100; 
}

int contaPares(int *Vetor, int Tamanho) {
  int Pares = 0;
   for(int i = 0; i < Tamanho; i++) 
    if(Vetor[i] % 2 == 0) {
     Pares++; 
    }
    return Pares;
}

int main(int argc, char const *argv[]){
  int Numeros[TAM], NumerosPares;
  preencheVetor(Numeros, TAM);
  imprimirVetor(Numeros, TAM);
  printf("Quantidade de pares: %i", contaPares(Numeros, TAM));
  return 0;
}
