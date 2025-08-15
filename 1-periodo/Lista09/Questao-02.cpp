#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
  setlocale(LC_ALL, "Portuguese");
  int Numero;
  int Contagem = 0;

  printf("Digite números inteiros ou 0 para sair: ");
  scanf("%i", &Numero);
  while (Numero != 0)
  {
    system("clear");   //"system("clear")" limpa a o terminal/compilador no linux, para windows utilize "system("cls")"
    printf("Digite números inteiros ou 0 para sair: ");
    scanf("%i", &Numero);
    Contagem++;
  }
    printf("Foram digitados %i números.\n", Contagem);
  return 0;
}
