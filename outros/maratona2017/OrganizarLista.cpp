

int main() {
    const int TAMANHO = 9;

    int Valores[TAMANHO], Y;;
    for (Y = 0; Y < TAMANHO; Y ++) {
        int W;
        for (W = 0; W < TAMANHO; W ++) {
            //printf("%i > %i ? %d\n", Valores[Y], Valores[W], Valores[Y] > Valores[W]);
            if (Valores[Y] > Valores[W]) {
                int ValorMenor = Valores[W];
                int ValorMaior = Valores[Y];

                Valores[Y] = ValorMenor;
                Valores[W] = ValorMaior;
            }
        }   
        
    }

    return 0;;

}


    int X, Y, ValoresFrequentes[2][TAMANHO];
    
    //Zerar tudo
    for (X = 0; X < TAMANHO; X ++) {
        ValoresFrequentes[0][X] = -1;
        ValoresFrequentes[1][X] = -1;
    }

    //int Contagem[TAMANHO];
    for (X = 0; X < TAMANHO; X ++) {
        Contagem[X] = 0;
    }
    for (X = 0; X < TAMANHO; X ++) {
        int ValorAtual = Valores[X];
        for (Y = 0; Y < TAMANHO; Y++) {
            if (Valores[Y] == ValorAtual) {
                Contagem[X]++;
            }
            //printf("%i == %i ? %d\n", ValorAtual, Valores[Y], Valores[Y] == ValorAtual);
        }
        //printf("NUm: %i, Contagem: %i\n", ValorAtual, Contagem[X]);
    }

    printf("\n");



