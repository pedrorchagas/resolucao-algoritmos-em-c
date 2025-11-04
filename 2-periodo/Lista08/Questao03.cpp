#include<stdio.h>
#include<locale.h>

int Funcao_Verifica(int Valor1, int Valor2) {
    if(Valor1 < Valor2) {
        return Valor1;
    } else {
        return Valor2;
    }
}


int main () {
    int Valor1, Valor2;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite dois números: ");
    scanf("%d %d", &Valor1, &Valor2);
    printf("O menor número é: %d\n", Funcao_Verifica(Valor1, Valor2));
    return 0;
}