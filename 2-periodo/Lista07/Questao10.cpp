#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define TAM_MATRIZ 10
#define TAM_NUM 100

int main() {
    srand(time(NULL));
    int Matriz[TAM_MATRIZ][TAM_MATRIZ], MaiorNumLinhas[TAM_MATRIZ], MenorNumColunas[TAM_MATRIZ], i, j, Num ;

    printf("Matriz gerada: \n");
    for (i = 0; i < TAM_MATRIZ; i++) {
        for (j = 0; j < TAM_MATRIZ; j++) {
            Matriz[i][j] = rand()%TAM_NUM;
            printf("%2d ", Matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < TAM_MATRIZ; i++) {
        Num = 0;
        for (j = 0; j < TAM_MATRIZ; j++) {
            if (Matriz[i][j] > Num) {
                Num = Matriz[i][j];
            }
        }
        MaiorNumLinhas[i] = Num;
    }

    for (j = 0; j < TAM_MATRIZ; j++) {
        Num = 0;
        for (i = 0; i < TAM_MATRIZ; i++) {
            if (Matriz[i][j] < Num || Num == 0) {
                Num = Matriz[i][j];
            }
        }
        MenorNumColunas[j] = Num;
    }

    printf("Maiores numeros linha:\n[");
    for (i = 0; i<TAM_MATRIZ; i++) {
        printf("%d,", MaiorNumLinhas[i]);
    }
    printf("]\n");

        printf("Menores numeros coluna:\n[");
    for (i = 0; i<TAM_MATRIZ; i++) {
        printf("%d,", MenorNumColunas[i]);
    }
    printf("]\n");

    return 0;
}