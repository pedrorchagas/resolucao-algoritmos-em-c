#include<stdio.h>

int main() {
    int Idade;
    while(1) {
        printf("Digite sua idade: ");
        scanf("%i", &Idade);
        if (Idade > 0) break;
        else printf("Idade inválida.\n");
    }

    return 0;
}