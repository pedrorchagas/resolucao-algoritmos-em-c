#include <stdio.h>
#include <math.h>

int main ()
{
  int X, Resultado;

  printf("Digite o valor de x: ");
  scanf("%i", &X);

  if (X < 1) {

    Resultado = 4 - pow(X, 2);
    
  }
  else if (X == 1) {
    Resultado =  2;
  }
  else {
    Resultado = 2 + pow(X, 2);
  }

  printf("f(x) = %i\n", Resultado);

  return 0;
}
