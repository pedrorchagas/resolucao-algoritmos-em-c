#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
  
  setlocale(LC_ALL, "Portuguese");
  float ValorEncomenda, Imposto, ICMS, Total, CotacaoDolar, TaxaIcms;
  char Remessa;

  TaxaIcms = 0.20483;
  CotacaoDolar = 5.9;

  printf("Sua compra é em site Remessa Conforme(S/N): ");
  fflush(stdin);
  scanf("%c", &Remessa);
  printf("VALOR DA ENCOMENDA R$: ");
  scanf("%f", &ValorEncomenda);
  
  if (Remessa == 'S') {
    if (ValorEncomenda <= 50 * CotacaoDolar) {
      Imposto = ValorEncomenda * 0.2;
    }
    else {
      Imposto = ValorEncomenda * 0.6 - 20 * CotacaoDolar;
    }
  }
  else {
    Imposto = ValorEncomenda * 0.6;
  }
  
  ICMS = (ValorEncomenda + Imposto) * TaxaIcms;
  Total = ICMS + Imposto + ValorEncomenda;
  
  printf("Federal Imposto de Importação R$ %.2f\n", Imposto);
  printf("Estadual ICMS R$ %.2f\n", ICMS);
  printf("Total com impostos R$ %.2f\n", Total);
  return 0;
}
