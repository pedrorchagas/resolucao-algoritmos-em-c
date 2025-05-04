#include <stdio.h>
#include <locale.h>

int main ()
{
  setlocale(LC_ALL, "Portuguese");
  char Nome[40];
  int Faltas;

  printf("Insira seu primeiro nome: ");
  scanf("%s", &Nome);
  printf("Insira o número de faltas: ");
  scanf("%i", &Faltas);

  float Porcentagem;
  Porcentagem = float(Faltas) * 100 / 60;
  printf("%s seu percentual de faltas é %.2f\n", Nome, Porcentagem);
  if (Porcentagem > 25) {
    printf("VOCÊ ESTÁ REPROVADO POR FALTA\n");
  }
  else {
    if (Porcentagem == 25) {
      printf("VOCÊ ESTÁ NO LIMITE DE FALTAS\n");
    }
    else if (Porcentagem == 0) {
      printf("VOCÊ NÃO TEM FALTAS\n");
    }
    else {
      printf("VOCÊ TEM FALTAS MAS AINDA NÃO ESTÁ NO LIMITE\n");
    }
  }
  return 0;
}

