#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

#define QNT_ELEMENTOS 20

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    float Media = 0;
    int Idades[QNT_ELEMENTOS] = {}, QntIdadesEncontradas = 0, IdadeAlvo, I;

    printf("Vetor gerado: ");
    for (I=0; I<QNT_ELEMENTOS; I++) {
        Idades[I] = rand() % 100;
        printf("%i", Idades[I]);
        Media += Idades[I];
    }
    printf("/n")
    printf("Digite a idade a procurar: ");
    scanf("%i", &IdadeAlvo);
    printf("/n/n/n");

    for(I=0; I < QNT_ELEMENTOS; I++) {
        if(Idades[I] == IdadeAlvo) {
            QntIdadesEncontradas +=1;
        }
    }
    Media = Media/QNT_ELEMENTOS;
    printf("A idade %i apareceu %i vez(es) no vetor\n", IdadeAlvo, QntIdadesEncontradas);
    printf("A média das idades é: %.1f\n", Media);

    if(IdadeAlvo > Media) {
        printf("A idade %i está acima da média.", IdadeAlvo);
    } else {
        printf("A idade %i está abaixo da média.", IdadeAlvo);
    }

    return 0;
}
