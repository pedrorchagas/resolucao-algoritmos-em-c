#include <stdio.h>
#include <locale.h>

int main ()
{
  setlocale(LC_ALL, "Portuguese");
  int NumeroDia;
  const char* Dia;

  printf("Número do dia da semana: ");
  scanf("%i", &NumeroDia);

  switch (NumeroDia) {
    case 1: Dia = "Domingo"; break;
    case 2: Dia = "Segunda-feira"; break;
    case 3: Dia = "Terça-feira"; break;
    case 4: Dia = "Quarta-feira"; break;
    case 5: Dia = "Quinta-feira"; break;
    case 6: Dia = "Sexta-feira"; break;
    case 7: Dia = "Sábado"; break;
    default:
      Dia = "Inválido";
      break;
  }

  printf("Dia da semana: %s\n", Dia);

  return 0;
}
