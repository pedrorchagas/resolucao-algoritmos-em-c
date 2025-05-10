#include<stdio.h>

int main() {

    // 5 3
    // 1 2
    // 0 4
    // 0 2
    // 5 6 6 2 2

    // 1 1 1 1 1 
    // 1 2 2 1 1 + 1
    // 2 3 3 2 2 + 1
    // 5 6 6 2 2 + 2


    //  colunas        Linhas
    int NumeroTeclas, NumeroAcordes;
    scanf("%i %i", &NumeroTeclas, &NumeroAcordes);
    
    // matriz
    int Teclado[NumeroAcordes + 1][NumeroTeclas];



    int X;
    for (X = 0; X < NumeroAcordes; X ++) {
        int Y;
        for (Y = 0; Y < NumeroTeclas; Y++ ) {
            Teclado[X][Y] = 0;
        }
    }
    for (X = 0; X < NumeroTeclas; X ++) {
        Teclado[0][X] = 1;

    }

    int Acordes;
    for (Acordes = 0; Acordes < NumeroAcordes; Acordes++ ) {
        int PrimeiraTecla, SegundaTecla, TamanhoAcorde;
        scanf("%i %i", &PrimeiraTecla, &SegundaTecla);

        int Moda = 0, ContagemModa = 0, X, Y;
        printf("Range: ");
        for (X = PrimeiraTecla; X <= SegundaTecla; X ++) {
            printf("%i, ", Teclado[Acordes][X]);
        }
        printf("\n");

        for (X = PrimeiraTecla; X <= SegundaTecla; X ++) {
            int Contagem = 0;
            for (Y = PrimeiraTecla; Y <= SegundaTecla; Y++) {
                if (Teclado[Acordes][X] == Teclado[Acordes][Y]) {
                    Contagem ++;
                }
            }
            if (Contagem >= ContagemModa ) {

                if (Contagem > ContagemModa) {
                    ContagemModa = Contagem;
                    Moda = Teclado[Acordes][X];
                } else {
                    if (Teclado[Acordes][X] > Moda) {
                        Moda = Teclado[Acordes][X];
                    }  
                }
            } 
        }
        printf("Moda: %i\n", Moda);
        // copia a linha de cima
        for (X = 0; X < NumeroTeclas; X ++) {
            Teclado[Acordes + 1][X] = Teclado[Acordes][X];
        }

        // ajusta os valores de acordo com a moda
        for (X = PrimeiraTecla; X <= SegundaTecla; X++) {
            Teclado[Acordes + 1][X] = Teclado[Acordes][X] + Moda;
            if (Teclado[Acordes + 1][X] >= 9) {
                Teclado[Acordes + 1][X] = Teclado[Acordes + 1][X] - 8;
            }
        }


    }

    for (X = 0; X < NumeroAcordes + 1; X ++) {
        int Y;
        printf("%iº |", X);
        for (Y = 0; Y < NumeroTeclas; Y++ ) {
            printf(" %i |", Teclado[X][Y]);
        }
        printf("\n");
    }



}