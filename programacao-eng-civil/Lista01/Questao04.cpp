#include<stdio.h>
#include<stdlib.h>

int main() {
	int PontosTimeA = 0, PontosTimeB = 0, PontosTimeC = 0, OpcaoEscolha, QntPontos;
    char LetraTimeEscolhido;
	
    while (true) {
        printf("Digite 1 para inserir pontos e 2 para remover pontos, ou digite 3 para sair: ");
        scanf("%i", &OpcaoEscolha);

        if (OpcaoEscolha == 3) {
            break;
        }
        
        printf("Digite a letra do time que deseja modificar a pontuação: ");
        scanf(" %c", &LetraTimeEscolhido);
        
        printf("Digite quantos pontos você deseja adicionar ou remover: ");
        scanf("%i", &QntPontos);

        if (OpcaoEscolha ==  2) {
            QntPontos = QntPontos * -1;
        }

        switch(LetraTimeEscolhido) {
            case 'A':
            case 'a':
                PontosTimeA += QntPontos;
                break;
            case 'B':
            case 'b':
                PontosTimeB += QntPontos;
                break;
            case 'C':
            case 'c':
                PontosTimeC += QntPontos;
                break;
            default:
                printf("Time não encontrado!");
                break;
        }

    }

    printf("Pontos dos times: \n");
    printf("A: %i, B: %i, C: %i\n\n", PontosTimeA, PontosTimeB, PontosTimeC);
	
}

