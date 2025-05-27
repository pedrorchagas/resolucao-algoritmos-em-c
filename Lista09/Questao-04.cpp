#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int Numero1, Numero2, Soma = 0;
    printf("Digite o primeiro numero: ");
    scanf("%i", &Numero1);
    printf("Digite o segundo numero: ");
    scanf("%i", &Numero2);

    if (Numero1 > Numero2) {
        printf("O primeiro numero deve ser menor ou igual ao segundo numero.\n");
        return 1; // Exit with an error code
    }

    for (Numero1; Numero1 <= Numero2; Numero1++) {
        Soma += Numero1;
    } 

    printf("A soma dos numeros entre %i e %i é: %i\n", Numero1, Numero2, Soma);
    return 0;
}