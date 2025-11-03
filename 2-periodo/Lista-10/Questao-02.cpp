#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
void ping(char *Vetor) {
  int Verifica = 1, ContaNumero = 0, ContaPonto = 0;
  for(int i = 0; Vetor[i] != '\0'; i++) {
    if(isalpha(Vetor[i]) || ((ispunct(Vetor[i])) && Vetor[i] != '.')) {
      Verifica = 0;
      break;
    }
    else if(isdigit(Vetor[i])) {
      ContaNumero++;
    }
    else if(Vetor[i] == '.') {
      ContaPonto++;
    }
  }
  if(ContaNumero == 8 && Verifica == 1 && ContaPonto == 3) {
    printf("IP válido!\n");
  }
  else {
    printf("IP inválido!\n"); 
  }
}
int main (int argc, char *argv[]) {
  setlocale(LC_ALL, "Portuguese");
  ping(argv[1]);
  return 0;
}
