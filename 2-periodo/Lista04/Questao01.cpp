#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 10
int main() {
  setlocale(LC_ALL, "Portuguese");
  char Array[TAMANHO], Auxiliar;

  printf("Informe os 5 caracteres: \n");
  for(int i = 0; i < TAMANHO; i++) {
    scanf(" %c", &Array[i]);
  }

  int Final = TAMANHO - 1;
  for(int i = 0; i < TAMANHO / 2; i++) {
    Auxiliar = Array[i];
    Array[i] = Array[Final];
    Array[Final] = Auxiliar;
    Final--;
  }

  for(int i = 0; i < TAMANHO; i++) {
    printf("%c", Array[i]);
  }

  return 0;
}
