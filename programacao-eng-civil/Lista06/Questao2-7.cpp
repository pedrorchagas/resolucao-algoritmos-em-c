#include<stdlib.h>
#include<stdio.h>

int main() {
    int IdadeNadador;
    printf("Escreva a idade do nadador: ");
    scanf("%i", &IdadeNadador);

    printf("O nadador é da categoria ");
    switch (IdadeNadador) {
        case 5 ... 7: 
            printf("Infantil A");
            break;
        case 8 ... 10:
            printf("Infantil B");
            break;
        case 11 ... 13:
            printf("Juvenil A");
            break;
        case 14 ... 17:
            printf("Juvenil B");
            break;
        default: {
            if (IdadeNadador >= 18 ) {
                printf("Adulto");
            } else {
                printf("Criança");
            }
        }
    }  
    return 0;
}