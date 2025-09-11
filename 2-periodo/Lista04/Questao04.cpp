#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


#define TAMANHO 10
int main() {
  setlocale(LC_ALL, "Portuguese"); 
  char Array[TAMANHO], Auxiliar;
  int IndiceMenor;

  printf("Informe as 10 letras:\n");
  for(int i = 0; i < TAMANHO; i++) {
    scanf(" %c", &Array[i]);
  }


  for(int i = 0; i < TAMANHO - 1; i++)  {
    IndiceMenor = i;
    for(int j = i + 1; j < TAMANHO; j++){
      if(Array[j] < Array[IndiceMenor]) {
        IndiceMenor = j;

      }
    }
    if(i != IndiceMenor) {
      Auxiliar = Array[i];
      Array[i] = Array[IndiceMenor];
      Array[IndiceMenor] = Auxiliar;
    }
  }

  printf("Letras em ordem alfabética: \n");
  for(int i = 0; i < TAMANHO; i++) {
    printf("%c", Array[i]);
  }
  printf("\n");
  system("Pause");
  return 0;
}
