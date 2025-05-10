#include<stdio.h>
#include<stdlib.h>

int main() {
    const int TAMANHO = 10;
    int Valores[TAMANHO] = {1, 2 , 8, 9, 8, 2, 3, 4, 2, 8};

    //printf("Valor teste: %i\n", Valores[TAMANHO - 1]);
    // | 1 | 2 | 3 | 4 | 5 | 
    // | 1 | 4 | 1 | 1 | 1 |
    
    int Moda = 0, ContagemModa = 0, X, Y;
    for (X = 0; X < TAMANHO; X ++) {
        int Contagem = 0;
        for (Y = 0; Y < TAMANHO; Y++) {
            if (Valores[X] == Valores[Y]) {
                Contagem ++;
            }
        }
        if (Contagem >= ContagemModa ) {

            if (Contagem > ContagemModa) {
                ContagemModa = Contagem;
                Moda = Valores[X];
            } else {
                if (Valores[X] > Moda) {
                    Moda = Valores[X];
                }  
            }

        } 
    }


    printf("moda: %i, Contabem: %i\n", Moda, ContagemModa);

    return 0;
}