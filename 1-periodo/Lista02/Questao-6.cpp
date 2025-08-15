
#include<locale.h>
#include <stdio.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    float SalarioBruto, SalarioLiquido, PercentualImposto;

    printf("Qual é o seu salário bruto? ");
    scanf("%f",&SalarioBruto);

    PercentualImposto = 20;

    SalarioLiquido = SalarioBruto - SalarioBruto * PercentualImposto / 100;

    printf("o seu salário liquido é: R$%.2f\n", SalarioLiquido);
    return 0;
}