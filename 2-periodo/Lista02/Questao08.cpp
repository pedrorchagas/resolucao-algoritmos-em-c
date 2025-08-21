#include<stdio.h>
#include<stdlib.h>

int main() {
    int QntNotas = 10, Notas[QntNotas] = {}, I;

    for (I = 0; I < QntNotas; I++) {
        do {
            printf("Escreva a %ia Nota: ", I + 1);
            scanf("%d", &Notas[I]);
            if (Notas[I] > 10 || Notas[I] < -10) {
                printf("Valor não permitido, escreva novamente a nota!\n");
            }
        } while (Notas[I] > 10 || Notas[I] < -10);
        if (Notas[I] < 0) {
            Notas[I] = 0;
        }
    }

    system("cls");
    printf("As notas do aluno foram:\n");
    for (I = 0; I < QntNotas; I++) {
        printf("[%i]", Notas[I]);
    }
    printf("\n\n\n");
    system("pause");

    return 0;
}