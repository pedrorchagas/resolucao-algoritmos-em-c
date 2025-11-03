#include <stdio.h>
#include <stdlib.h>
void verificaValor(int *Num, int *Num2) {
  int Aux;
  if(*Num < *Num2) {
    Aux = *Num;
    *Num = *Num2;
    *Num2 = Aux;
 }
}

int main() {
  int ValorA, ValorB;
  printf("Digite dois numeros inteiros : ");
  scanf("%d %d", &ValorA, &ValorB);
  verificaValor(&ValorA, &ValorB);
  printf("Maior valor : %d\n", ValorA);
  printf("Menor valor : %d\n", ValorB);
  system("pause");
  return 0;
}
