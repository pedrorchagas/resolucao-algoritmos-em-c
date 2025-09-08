#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define QNT_QUESTOES 10
#define QNT_ALUNOS 2

int main() {
    char Gabarito[QNT_QUESTOES], Alternativa;
    float NotasAlunos[QNT_ALUNOS] = {};
    int i, j;

    printf("Gabarito:\n");
    for (i = 0; i < QNT_QUESTOES; i++) {

        scanf(" %c", &Alternativa);
        Alternativa = toupper(Alternativa);

        if (isalpha(Alternativa)) {
            if (
                Alternativa == 'A' ||
                Alternativa == 'B' ||
                Alternativa == 'C' ||
                Alternativa == 'D' ||
                Alternativa == 'E'
            ) {
                Gabarito[i] = Alternativa;
            } else {
                printf("Alternativa inválida!");
                system("pause");
                return 0;
            }
        } else {
            printf("Alternativa inválida!");
            system("pause");
            return 0;
        }
    }

    for(i = 0; i < QNT_ALUNOS; i++) {

        printf("Respostas aluno %i:\n", i+1);
        for (j = 0; j < QNT_QUESTOES; j++) {

            scanf(" %c", &Alternativa);
            Alternativa = toupper(Alternativa);

            if (isalpha(Alternativa)) {
                if (
                    Alternativa == 'A' ||
                    Alternativa == 'B' ||
                    Alternativa == 'C' ||
                    Alternativa == 'D' ||
                    Alternativa == 'E'
                ) {
                    if (Alternativa == Gabarito[j]) {
                        NotasAlunos[i] += 1;
                    }
                } else {
                    printf("Alternativa inválida!");
                    system("pause");
                    return 0;
                }
            } else {
                printf("Alternativa inválida!");
                system("pause");
                return 0;
            }
        } 
    }

    for (i = 0; i < QNT_ALUNOS; i++) {
        printf("Nota aluno %i: %.1f\n", i+1, NotasAlunos[i]);
    }

    return 0;
}