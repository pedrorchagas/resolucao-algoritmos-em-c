#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

#define NUM_QUESTOES 10
int main() {
  setlocale(LC_ALL, "Portuguese");

  char Aluno1[NUM_QUESTOES], Aluno2[NUM_QUESTOES], Gabarito[NUM_QUESTOES];
  float Notas1 = 0.0, Notas2 = 0.0;


  printf("Gabarito:\n");
  for(int i = 0; i < NUM_QUESTOES; i++) { 
    scanf(" %c", &Gabarito[i]);
    if(!isalpha(Gabarito[i])) {
      printf("Inválido. Digite uma letra.\n");
      i--;
    }
  }


  printf("Respostas aluno 1:\n");
  for(int i = 0; i < NUM_QUESTOES; i++) {
    scanf(" %c", &Aluno1[i]);
    if(!isalpha(Aluno1[i])) {
      printf("Inválido. Digite uma letra.\n");
      i--;
    }
  }

  printf("Respostas aluno 2:\n");
  for(int i = 0; i < NUM_QUESTOES; i++) {
    scanf(" %c", &Aluno2[i]);
    if(!isalpha(Aluno2[i])) {
      printf("Inválido. Digite uma letra.\n");
      i--;
    }
  }


  for(int i = 0; i < NUM_QUESTOES; i++) {
    if(toupper(Aluno1[i]) == toupper(Gabarito[i])) {
      Notas1 += 1.0;
    }
    if(toupper(Aluno2[i]) == toupper(Gabarito[i])) {
      Notas2 += 1.0;
    }
  }
  system("cls");
  printf("Nota aluno 1: %.1f\n", Notas1);
  printf("Nota aluno 2: %.1f\n", Notas2);
  system("Pause");
  return 0;
}
