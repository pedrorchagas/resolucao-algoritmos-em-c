#include<stdio.h>
#include<locale.h>

int Potencia(int Base, int Expoente) {
    int I, Pot = 1;
    for (I=1; I <= Expoente; I++) {
        Pot *= Base;
    }
    return Pot;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int Base, Expoente;

    printf("Informe dois valores: ");
    scanf("%d %d", &Base, &Expoente);

    printf("O Valor da potência é: %d\n", Potencia(Base, Expoente));
    return 0;
}