
#include <stdio.h>
int main() {
    int AnoAtual, Idade, AnoNascimento;

    printf("Qual é a sua idade? ");
    scanf("%i",&Idade);

    AnoAtual = 2025;
    AnoNascimento = AnoAtual - Idade;

    printf("O ano que você nasceu é: %i\n", AnoNascimento);
    return 0;
}