#include<stdio.h>
#include<locale.h>

int Funcao_Verifica(int Valor1, int Valor2, int Valor3) {
    if (Valor1 < Valor2 && Valor1 < Valor3) {
        return Valor1;
    } else if (Valor2 < Valor1 && Valor2 < Valor3) {
        return Valor2;
    } else if (Valor3 < Valor1 && Valor3 < Valor2) {
        return Valor3;
    } else {
        return Valor1;
    }
}


int main () {
    int Valor1, Valor2, Valor3;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite três números: ");
    scanf("%d %d %d", &Valor1, &Valor2, &Valor3);
    printf("O menor número é: %d\n", Funcao_Verifica(Valor1, Valor2, Valor3));
    return 0;
}