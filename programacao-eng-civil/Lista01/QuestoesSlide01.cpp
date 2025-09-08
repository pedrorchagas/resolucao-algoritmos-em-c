#include<stdio.h>
int main() {
    int  Dia = 9, Mes = 8, Ano = 2006, Idade = 19;
    char Letra = 'P';
    float Altura = 1.80, Peso = 88.50;
    float PI = 3.14;

    printf("Altura = %.2f, peso = %.2f", Altura, Peso);
    printf("\nLetra = %c", Letra);
    printf("\nPI = %f");
    printf("\nData nascimento %d/%d/%d tenho %d anos", Dia, Mes, Ano, Idade);


    return 0;
}

#include<stdio.h>
int main() {
    int numero1 = 10, numero2=20, numero3=30, numero4=40, numero5=50, numero6=60;
    int letrac = 'c', letrao = 'o', letrae = 'e', letral='l', letrah = 'h';

    printf("As variáveis inteiras contem os números: %d,%d,%d,%d,%d,%d", numero1, numero2, numero3, numero4, numero5, numero6);
    printf("\nO animal contido nas variáveis caracteres e o %c%c%c%c%c%c\n\n", letrac, letrao, letrae, letral, letrah, letrao);

    return 0;
}