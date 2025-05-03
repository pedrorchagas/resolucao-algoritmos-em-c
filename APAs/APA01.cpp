#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
  setlocale(LC_ALL, "Portuguese");            
  int NumeroMeses;
  float ValorFinanciado, TaxaJuros, Prestacao, TotalPago, TotalJuros;

  printf("Valor Financiado: ");
  scanf("%f", &ValorFinanciado);
  printf("Número de Meses: ");
  scanf("%i", &NumeroMeses);
  printf("Taxa de Juros: ");
  scanf("%f", &TaxaJuros);
  
  TaxaJuros = TaxaJuros / 100;
  Prestacao = (ValorFinanciado * TaxaJuros) / (1 - pow(1 + TaxaJuros, -NumeroMeses));
  TotalPago = Prestacao * NumeroMeses;
  TotalJuros = TotalPago - ValorFinanciado;

  printf("Prestação: %.2f\n", Prestacao);
  printf("Total Pago: %.2f\n", TotalPago);
  printf("Total de Juros: %.2f\n", TotalJuros);
  return 0;
}
