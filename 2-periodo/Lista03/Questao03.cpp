#include<stdio.h>
#include<stdlib.h>

int main() {
    int QntCandidatos, i;
    bool CarlosVencedor = true;

    printf("\n\n\nQuantos candidatos se inscreveram: ");
    scanf("%i", &QntCandidatos);

    int Votos[QntCandidatos];
    for (i = 0; i < QntCandidatos; i++) {
        printf("Voto Canditado%i: ", i + 1);
        scanf("%i", &Votos[i]);

        if (Votos[i] > Votos[0]) {
            CarlosVencedor = false;
        }
    }
    
    if (CarlosVencedor) {
        printf("\n\nCarlos foi eleito: SIM");
    } else {
        printf("\n\nCarlos foi eleito: NÃO");
    }
    printf("\n\n\n");
    system("pause");

    return 0;
}