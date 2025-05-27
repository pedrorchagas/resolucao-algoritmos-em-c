#include<stdio.h>

int main() {
    int Valor = 0, SomaPostivo = 0, TotalNegativo = 0;
    printf("Digite seis números: \n");
    
    for (int X = 0; X<6; X++) {
        
        scanf("%i", &Valor);

        if (Valor >= 0) SomaPostivo += Valor;
        else TotalNegativo++;
        
    }
    printf("Soma dos positivos: %i\n", SomaPostivo);
    printf("Quantidade de números negativos: %i\n", TotalNegativo); 
    return 0;
}