#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 10
int main() {
  setlocale(LC_ALL, "Portuguese");
  char Array[TAMANHO], Auxiliar;

  printf("Informe os 10 caracteres: \n");
  for(int i = 0; i < TAMANHO; i++)
    scanf(" %c", &Array[i]);

  for(int i = 0; i < TAMANHO; i += 2) {
    Auxiliar = Array[i];
    Array[i] = Array[i + 1];
    Array[i + 1] = Auxiliar;
  }

  for(int i = 0; i < TAMANHO; i++)
    printf("%c", Array[i]);

  return 0;
}
