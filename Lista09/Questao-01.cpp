#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{
  setlocale(LC_ALL, "Portuguese");
  int Numero;
  printf("Digite números inteiros ou 0 para sair: ");
  scanf("%i", &Numero);
  while (Numero != 0)
  {
    system("clear");   //"system("clear")" limpa a o terminal/compilador no linux, para windows utilize "system("cls")"
    printf("Digite números inteiros ou 0 para sair: ");
    scanf("%i", &Numero);
  }
    printf("Fim do laço.\n");
  return 0;
}
