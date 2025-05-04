#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
  setlocale(LC_ALL, "Portuguese");
  int Opcao;
  float Valor;

  printf
    ("1 - Franco suíço\n2 - Libra Esterlina\n3 - Dólar\n4 - Marco Alemão\nEscolha uma opção para converter: ");
  scanf("%i", &Opcao);
  printf("Digite um valor em BRL: ");
  scanf("%f", &Valor);

  float Moeda;
  switch (Opcao) {
    case 1: Moeda = 0.15;
            break;
    case 2: Moeda = 0.13;
            break;
    case 3: Moeda = 0.18;
            break;
    case 4: Moeda = 0.31;
            break;
    default: printf("Opção inválida!/n");
             break;
  }
  if (Opcao > 0 && Opcao < 5) {
    float ValorConvertido;
    ValorConvertido = Valor * Moeda;
    printf("Valor Convertido: %.2f\n", ValorConvertido);
  }

      
  return 0;
}

