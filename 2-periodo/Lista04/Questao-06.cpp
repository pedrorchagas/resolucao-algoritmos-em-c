#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 14
int main() {
  setlocale(LC_ALL, "Portuguese");
  char CPF[TAMANHO];

  printf("Informe o CPF: \n");
  for(int i = 0; i < TAMANHO; i++) {
    scanf(" %c", &CPF[i]);
  }

  for(int i = 0; i < TAMANHO; i++) {
    CPF[i] = '#';
    if(i == 2) {
      i += 9;
    }
  }

  printf("CPF convertido: \n");
  for(int i = 0; i < TAMANHO; i++) {
    printf(" %c", CPF[i]);
  }

  return 0;
}
