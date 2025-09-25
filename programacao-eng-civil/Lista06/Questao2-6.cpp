#include<stdio.h>

int main() {
    int CodigoProduto;

    printf("Escreva o código do produto: ");
    scanf("%i", &CodigoProduto);

    printf("O código do produto faz referência a ");
    switch (CodigoProduto) {
        case 1:
            printf("Alimento Não-pecesível\n");
            break;
        case 2 ... 4:
            printf("Alimento perecível\n");
            break;
        case 5 ... 6:
            printf("Vestuário\n");
            break;
        case 7:
            printf("Higiane Pessoal\n");
            break;
        case 8 ... 15:
            printf("Limpeza e higiene-pessoal\n");
            break;
        default: printf("Inválido");
    }

    return 0;
}