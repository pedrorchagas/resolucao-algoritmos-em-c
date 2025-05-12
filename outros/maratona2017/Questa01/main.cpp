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
    
    // matriz    LINHAS             COLUNAS
    int Teclado[NumeroAcordes + 1][NumeroTeclas];


    // Cria a matriz no tamanho desejado, zera tudo (para evitar conflito com a memória de lixo) e define a nota da 1º linha (linha inicial do teclado)
    int X;
    for (X = 0; X < NumeroAcordes; X ++) {
        int Y;
        for (Y = 0; Y < NumeroTeclas; Y++ ) {
            if (X == 0) {
                Teclado[0][Y] = 1;
            } else Teclado[X][Y] = 0; 
        }
    }

    // Inicio da lógica, irá entrar em um for de acordo com o número dos acordes
    int Acordes;
    for (Acordes = 0; Acordes < NumeroAcordes; Acordes++ ) {
        int PrimeiraTecla, SegundaTecla, TamanhoAcorde;
        scanf("%i %i", &PrimeiraTecla, &SegundaTecla);

        //printf("Range: ");
        /*
            PARA DEPURAÇÃO
        for (X = PrimeiraTecla; X <= SegundaTecla; X ++) {
            printf("%i, ", Teclado[Acordes][X]);
        }
        */
        //printf("\n");

        // Etapa responsável por encontrar a Moda
        int Moda = 0, ContagemModa = 0, X, Y;
        for (X = PrimeiraTecla; X <= SegundaTecla; X ++) {

            // Primeiro ele pega o primeiro valor e varre a lista procurando um igual e, se caso encontrar, ele soma na contagem.
            int Contagem = 0;
            for (Y = PrimeiraTecla; Y <= SegundaTecla; Y++) {
                if (Teclado[Acordes][X] == Teclado[Acordes][Y]) {
                    Contagem ++;
                }
            }

            /* 
             Como no problema precisamos do número frequente maior, ele irá verificar se a contagem de números iguais e igual ou maior,
             se for maior ele apenas substitui, se for menor, ele irá ver qual dos dois números são maior 
            */
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
        //printf("Moda: %i\n", Moda);

        // Segundo, faz a cópia da linha superior
        for (X = 0; X < NumeroTeclas; X ++) {
            Teclado[Acordes + 1][X] = Teclado[Acordes][X];
        }

        // Por fim, ajusta os valores de acordo com a moda
        for (X = PrimeiraTecla; X <= SegundaTecla; X++) {
            Teclado[Acordes + 1][X] = Teclado[Acordes][X] + Moda;
            if (Teclado[Acordes + 1][X] >= 9) {
                Teclado[Acordes + 1][X] = Teclado[Acordes + 1][X] - 9;
            }
        }

    }
    
    // Imprime o resultado final
    for (X=0; X<NumeroTeclas; X++) {
        printf("%i\n", Teclado[NumeroAcordes][X]);
    }

    /*
        ISSO AQUI É PARA DEPURAÇÃO, ela imprime a matriz

    for (X = 0; X < NumeroAcordes + 1; X ++) {
        int Y;
        printf("%iº |", X);
        for (Y = 0; Y < NumeroTeclas; Y++ ) {
            printf(" %i |", Teclado[X][Y]);
        }
        printf("\n");
    }
    */


}