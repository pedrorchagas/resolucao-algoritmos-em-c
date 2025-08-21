#include<stdio.h>

int main() {
    int QntNumeros = 20, Vetor[QntNumeros] = {}, I;

    for (I = QntNumeros/2; I < QntNumeros; I++) {
        Vetor[I] = 1;
    }

    printf("\n\n\n\n");
    for (I = 0; I < QntNumeros; I++ ) {
        printf("[%i]", Vetor[I]);
    }
    printf("\n\n\n\n");

    return 0;
}