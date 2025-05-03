#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {
    int OpcaoMenu;

    printf("Menu de opções:\n");
    printf("1. Somar dois números\n");
    printf("2. Raiz quadrada de um número\n");
    printf("3. O cubo de um número\n");
    printf("4. Diferença do maior pelo menor\n");

    printf("Digite a opção desejada: ");
    scanf("%i",&OpcaoMenu);

    switch (OpcaoMenu) {
        case 1: {
            float Numero1, Numero2, Resultado;
            printf("Digite o 1o número: ");
            scanf("%f",&Numero1);
            printf("Digite o 2o número: ");
            scanf("%f",&Numero2);

            Resultado = Numero1 + Numero2;
            printf("Soma dos números: %.2f", Resultado);
            break;
        }
        case 2: {
            float Raiz;

            printf("Digite um número: ");
            scanf("%f",&Raiz);

            Raiz = sqrt(Raiz);
            printf("Raiz quadrada: %.2f", Raiz);
            break;
        }
        case 3: {
            float Cubo;
            printf("Digite um número: ");
            scanf("%f",&Cubo);

            Cubo = pow(Cubo, 3);
            printf("Cubo: %.2f", Cubo);
            break;
        }
        case 4: {
            float Numero1, Numero2, Resultado;
            printf("Digite o 1o número: ");
            scanf("%f",&Numero1);
            printf("Digite o 2o número: ");
            scanf("%f",&Numero2);

            if (Numero1 > Numero2 || Numero1 < Numero2 ) {
                if (Numero1 > Numero2) {
                    Resultado = Numero1 - Numero2;
                    printf("%.1f - %.1f = %.1f", Numero1, Numero2, Resultado);
                }
                else {
                    Resultado = Numero2 - Numero1;
                    printf("%.1f - %.1f = %.1f", Numero2, Numero2, Resultado);
                }
            } else printf("Números iguais!");
            break;
        }
        default: printf("Erro! Opção inválida!");

    }

    printf("\n");
    return 0;
}