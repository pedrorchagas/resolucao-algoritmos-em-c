#include <stdio.h>
void preencherMatriz(int Matriz[5][5]) {
  int Linha;
  int Coluna;
  for (Linha = 0; Linha < 5; Linha++) {
    for (Coluna = 0; Coluna < 5; Coluna++) {
      printf("Digite o elemento [%i][%i]: ", Linha, Coluna);
      scanf("%i", &Matriz[Linha][Coluna]);
    }
  }
}

int somarMatriz(int Matriz[5][5]) {
  int SomaElementos = 0;
  int Linha;
  int Coluna;
  for (Linha = 0; Linha < 5; Linha++) {
    for (Coluna = 0; Coluna < 5; Coluna++) {
      SomaElementos += Matriz[Linha][Coluna];
    }
  }
  return SomaElementos;
}

int main() {
  int MatrizA[5][5];
  int SomaTotal;

  preencherMatriz(MatrizA);
  SomaTotal = somarMatriz(MatrizA);
  printf("A soma dos elementos e: %i\n", SomaTotal);
  return 0;
}