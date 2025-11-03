#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define COL 8
#define LIN 8

void imprimirMatriz(float Matriz[LIN][COL]) {
  for(int i = 0; i < LIN; i++) {
    for(int j = 0; j < COL; j++) 
      printf("%6.2f ", Matriz[i][j]);
  printf("\n");
  }
}

void preencherMatriz(float Matriz [LIN][COL]) {
  for(int i = 0; i < LIN; i++) {
    for(int j = 0; j < COL; j++) 
      Matriz[i][j] = rand() % 100; 
  }
}

float maiorValDiag(float Matriz[LIN][COL]) {
  float maior = Matriz[0][0];
  for(int i = 0; i < LIN; i++) {
    if(Matriz[i][i] > maior) {
      maior = Matriz[i][i];
    }
  }
  return maior;
}

void divideMatriz(float Matriz[LIN][COL], float maior) {
  for(int i = 0; i < LIN; i++) {
    for(int j = 0; j < COL; j++) {
      Matriz[i][j] /= maior;
    }
  }
}


int main(int argc, char const *argv[]) {
  float Matriz[LIN][COL], MaiorValorDiagonal;
  srand(time(NULL));
  preencherMatriz(Matriz);
  imprimirMatriz(Matriz);
  MaiorValorDiagonal = maiorValDiag(Matriz);
  divideMatriz(Matriz, MaiorValorDiagonal);
  printf("Matriz dividida: \n");
  imprimirMatriz(Matriz);

  return 0;
} 