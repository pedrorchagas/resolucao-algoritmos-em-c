#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 5
#define COLUNAS 6
#define TAM_NUMERO 10


int main() {
    srand(time(NULL));

    int Matriz[LINHAS][COLUNAS], SomaAux, i, j;

    printf("Matriz gerada: \n");
    for (i = 0; i < LINHAS; i++){
        for (j = 0; j < COLUNAS; j++) {
            Matriz[i][j] = rand()%TAM_NUMERO;
            printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < LINHAS; i++){
        SomaAux = 0;
        for (j = 0; j < COLUNAS; j++) {
            SomaAux += Matriz[i][j];
        }
        printf("Soma da linha %d: %d\n", i, SomaAux);
    }

    for (j = 0; j < COLUNAS; j++){
        SomaAux = 0;
        for (i = 0; i < LINHAS; i++) {
            SomaAux += Matriz[i][j];
        }
        printf("Soma da coluna %d: %d\n", i, SomaAux);
    }

    return 0;
}