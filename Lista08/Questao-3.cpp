#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int Idade;

    printf("Qual é a sua idade? ");
    scanf("%i",&Idade);

    if (Idade <=15) {
        printf("Você é criança");
    }

    if (Idade >=15 && Idade <=29) {
        printf("Você é Jovem");
    }

    if (Idade >= 30 && Idade <=59 ) {
        printf("Você é adulto");
    }

    if (Idade >=60) {
        printf("Você é idoso");
    }
    printf("\n");

    return 0;
}