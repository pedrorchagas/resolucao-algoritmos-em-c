#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
  setlocale(LC_ALL, "Portuguese");
  int Opcao;
  float Valor;

  printf("HOSPITAL DO CÂNCER\n");
  printf("1      Para doar R$ 15,00\n");
  printf("2      Para doar R$ 25,00\n");
  printf("3      Para doar R$ 35,00\n");
  printf("4      Para doar R$ 50,00\n");
  printf("5      Para doar outros valores\n");
  printf("6      Para cancelar\n");
  printf("Escolha uma opção:");
  scanf("%i", &Opcao);

  switch (Opcao) {
    case 1: Valor = 15;
            break;
    case 2: Valor = 25;
            break;
    case 3: Valor = 35;
            break;
    case 4: Valor = 50;
            break;
    case 5:
            printf("Digite um valor para doar: ");
            scanf("%f", &Valor);
            break;
    case 6: printf("O Hospital do Câncer agradece a ligação!\n");
            break;
    default:
      printf("OPÇÃO INCORRETA! Escolha uma opção entre 1 e 6.\n");
      break;
  }
  if (Opcao >= 1 && Opcao <  6) {
    printf("Você doou R$ %.2f\n", Valor);
    printf("O Hospital do Câncer agradece a doação!\n");
  }
  return 0;
}

