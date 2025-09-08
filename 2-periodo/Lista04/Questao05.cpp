#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define TAMANHO 12
int main() {
  setlocale(LC_ALL, "Portuguese");
  char Array[TAMANHO];

  printf("Informe as 12 letras: \n");
  for(int i = 0; i < TAMANHO; i++) {
    scanf(" %c", &Array[i]);
    if (islower(Array[i])) {
      Array[i] = toupper(Array[i]);
    }
    if(!isalpha(Array[i])) {
      Array[i] = '*';
    }
  }

  printf("Vetor Convertido:\n");
  for(int i = 0; i < TAMANHO; i++) {
    printf("%c", Array[i]);
  }

  return 0;
}
