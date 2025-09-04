#include <stdio.h>
#define TAMANHO 13
#include <ctype.h>

int main() {
    char NomeEmail[TAMANHO] = {'R','u','i',' ','D','i','a','s',' ','R','e','i','s'};
    int i;

    // Para imprimir a lista de caracteres
    for (i = 0; i < TAMANHO; i++) {
        printf("%c", NomeEmail[i]);
    }

    for (i = 0; i < TAMANHO; i++) {
        if (isupper(NomeEmail[i])) NomeEmail[i] = tolower(NomeEmail[i]);
        if (isspace(NomeEmail[i])) NomeEmail[i] = '_';
    }

    printf("\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%c", NomeEmail[i]);
    }
    printf("\n");
    system("pause");

    return 0;
}