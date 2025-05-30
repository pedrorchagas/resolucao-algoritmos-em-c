#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int Resultado, PrimeiroNumero, SegundoNumero, Contador = 0;
    printf("Escreva o primeiro número: ");
    scanf("%i", &PrimeiroNumero);
    Resultado = PrimeiroNumero;
    Contador = PrimeiroNumero;
    printf("Escreva o segundo número: ");
    scanf("%i", &SegundoNumero);
    
    do {
        Resultado = Resultado * (Contador + 1);
        Contador++;

    } while (Contador != SegundoNumero);
    

    printf("O produto dos valores %i e %i: %i\n", PrimeiroNumero, SegundoNumero, Resultado);

    return 0;
}