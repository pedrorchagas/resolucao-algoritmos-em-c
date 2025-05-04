#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
 setlocale(LC_ALL, "Portuguese");
 int Numero1, Numero2, Numero3, Auxiliar;

 printf("Digite três números: ");
 scanf("%i %i %i", &Numero1, &Numero2, &Numero3);

 if (Numero1 > Numero2) { Auxiliar = Numero1; Numero1 = Numero2; Numero2 = Auxiliar; }
 if (Numero1 > Numero3) { Auxiliar = Numero1; Numero1 = Numero3; Numero3 = Auxiliar; }
 if (Numero2 > Numero3) { Auxiliar = Numero2; Numero2 = Numero3; Numero3 = Auxiliar; }

 printf("Números ordenados: %i %i %i\n", Numero1, Numero2, Numero3);
  return 0;
}
