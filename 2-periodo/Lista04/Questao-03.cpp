#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAMANHO 13
int main() {
  int NomeEmail[TAMANHO] = {'R', 'u', 'i', ' ', 'D', 'i', 'a', 's', ' ', 'R', 'e', 'i', 's'};

  for(int i = 0; i < TAMANHO; i++) 
    printf("%c", NomeEmail[i]);
  printf("\n");

  for(int i = 0; i < TAMANHO; i++) {
    if(isupper(NomeEmail[i])) {
      NomeEmail[i] = tolower(NomeEmail[i]);
    }
    if(isspace(NomeEmail[i])) {
      NomeEmail[i] = '_';
    }
  }

  for(int i = 0; i < TAMANHO; i++) 
    printf("%c", NomeEmail[i]);
  printf("\n");
  return 0;
}
