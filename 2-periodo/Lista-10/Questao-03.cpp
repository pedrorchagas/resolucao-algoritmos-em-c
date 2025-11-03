#include <stdio.h>
#include <stdlib.h>

void converte2inteiro(char *argv[], int ArgvInteiros[], int argc) {
  for(int i = 1; i < argc; i++) {
    ArgvInteiros[i - 1] = atoi(argv[i]);
  }
}

void maior_menor(int Vetor[], int argc, int *Max, int *Min) {
  *Max = Vetor[0];
  *Min = Vetor[0];
  for(int i = 0; i < argc; i++) {
   if(Vetor[i] > *Max) {
     *Max = Vetor[i];
   }
   if(Vetor[i] < *Min){
     *Min = Vetor[i];
   }
  }
}

int main (int argc, char *argv[]) {
  int Maior, Menor, VetorInteiros[argc - 1];
  converte2inteiro(argv, VetorInteiros, argc);
  maior_menor(VetorInteiros, argc, &Maior, &Menor);
  printf("Maior valor: %i\nMenor valor = %i\n", Maior, Menor);
  return 0;
}
