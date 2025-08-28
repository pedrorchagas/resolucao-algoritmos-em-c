#include<stdlib.h>
#include<stdio.h>
#include<ctime>

#define TAMANHO_VETOR 8
#define TAMANHO_NUM 100

int main() {
    int Vetor[TAMANHO_VETOR], i, Auxiliar, Pos1oElemento, Pos2oElemento;
    srand(time(NULL));

    printf("\n\n\n\n\nVetor gerado: ");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        Vetor[i] = rand() % TAMANHO_NUM;
        printf("%2d ", Vetor[i]);
    }

    printf("\n\n\nPosição do 1o elemento para troca: ");
    scanf("%i", &Pos1oElemento);
    Auxiliar = Vetor[Pos1oElemento-1];

    printf("\n\n\nPosição do 2o elemento para troca: ");
    scanf("%i", &Pos2oElemento);
    Vetor[Pos1oElemento-1] = Vetor[Pos2oElemento-1];
    Vetor[Pos2oElemento-1] = Auxiliar;
    
    printf("\n\n\nVetor após a troca: ");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%2i ", Vetor[i]);
    }
    
    system("pause");

    return 0;
}