#include <stdio.h>
#include <stdlib.h>
#define TAM 20

void lerVetor(int *Vetor, int Tamanho) {
  for(int i = 0; i < Tamanho; i++) {
    printf("Digite o %ia idade: ", i + 1); scanf("%i", &Vetor[i]);
  }
}

void verifica(int *Vetor, int *Maximo, int *Minimo) {
  int Menor = Vetor[0], Maior = Vetor[0];
  for(int i = 0; i < TAM; i++) {
    if(Vetor[i] > Maior) {
      Maior = Vetor[i];
    }
    else if(Vetor[i] < Menor) {
      Menor = Vetor[i];
    }
  }
  *Maximo = Maior;
  *Minimo = Menor;
}

int main (int argc, char *argv[]) {
  int Idades[TAM], MaiorIdade, MenorIdade;
  lerVetor(Idades, TAM);
  verifica(Idades, &MaiorIdade, &MenorIdade);
  printf("Maior idade: %i\nMenor idade: %i\n", MaiorIdade, MenorIdade);
  return 0;
}
