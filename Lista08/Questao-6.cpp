#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
  setlocale(LC_ALL, "Portuguese");
  float Consumo, TotalConta, Assinatura;

  printf("Digite o consumo de água da residência: ");
  scanf("%f", &Consumo);
  
  Assinatura = 7.00;
  if (Consumo <= 100) {
    if (Consumo <=10) {
      TotalConta = Assinatura;
    }
    else if (Consumo > 10 && Consumo <= 30) {
      TotalConta = Assinatura + ((Consumo - 10));
    }
    else {
      TotalConta = Assinatura + 20 + ((Consumo - 30) * 2);
    }
  }
  else {
    TotalConta = Assinatura + 20 + 70 * 2 + ((Consumo - 100) * 5);
  }

  printf("Valor da conta de água: %.2f\n", TotalConta);
  return 0;
}
