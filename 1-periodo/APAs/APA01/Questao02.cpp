#include <stdio.h>
#include <math.h>

int main() {

  int Etiqueta, Prateleira, Andar, PortaPallet;

  printf("Etiqueta: ");
  scanf("%i", &Etiqueta);

  Prateleira = Etiqueta / 1000;
  PortaPallet = Etiqueta % 100;
  Andar = (Etiqueta % 1000 - PortaPallet) / 100;

  printf("Prateleira: %i\n", Prateleira);
  printf("Andar: %i\n", Andar);
  printf("Porta Pallet: %i\n", PortaPallet);
  return 0; 
}


