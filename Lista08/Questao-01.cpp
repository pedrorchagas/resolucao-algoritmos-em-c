#include <stdio.h>
#include <math.h>
#include <locale.h>

int main ()
{
  setlocale(LC_ALL, "Portuguese");
  int Numero1, Numero2, Numero3, Delta;
  float X1,X2;
  
  printf("Digite três valores inteiros: ");
  scanf("%i", &Numero1);
  printf("Digite três valores inteiros: ");
  scanf("%i", &Numero2);
  printf("Digite três valores inteiros: ");
  scanf("%i", &Numero3);

  if (Numero1 != 0) {
    Delta = pow(Numero2, 2) - 4 * Numero1 * Numero3;
    if (Delta >= 0) {
      X1 = (-Numero2 + sqrt(Delta)) / (Numero1 * 2);
      X2 = (-Numero2 - sqrt(Delta)) / (Numero1 * 2);
      printf("Duas Raízes são: %.2f e X2: %.2f.\n", X1, X2);
    }
    else {
      printf("Não há raízes reais.\n");
    } 
  }
  else {
    printf("Não é equação do Segundo grau.\n");
  }
  return 0;
}


