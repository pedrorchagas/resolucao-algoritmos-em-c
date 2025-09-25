
#include<stdio.h>
#include<stdlib.h>

int main() {
    int NumeroConta, N1, N2, N3, DigitoVerificador;

    printf("Informe o número da conta: ");
    scanf("%d", &NumeroConta);

    N1 = NumeroConta / 100;
    N2 = (NumeroConta % 100) / 10;
    N3 = (NumeroConta % 100) % 10;

    NumeroConta = NumeroConta + (N3 * 100 + N2 * 10 + N1);

    N1 = NumeroConta / 100;
    N2 = (NumeroConta % 100) / 10;
    N3 = (NumeroConta % 100) % 10;

    DigitoVerificador = N1 + N2 * 2 + N3 * 3;
    DigitoVerificador = DigitoVerificador % 10;

    printf("O numero verificador é %d", DigitoVerificador);
    return 0;
}