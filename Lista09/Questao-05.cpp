#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float Nota=0, Soma=0, Contador=0;
    printf("Digite as notas ou -1 para sair:\n");
    while (1)
    {
        scanf("%f", &Nota);
        if (Nota == -1) {
            break;
        }

        Soma += Nota;
        Contador++;
    } 
    
    if (Contador == 0 && Soma == 0) {
        printf("Nenhuma nota foi informada!\n");
    } else {
        Nota = Soma / (Contador);
        printf("A média das notas digitadas: %f\n", Nota);
    }
    return 0;
}